#include <stdio.h>
#include "manapool.h"

int main()
{
    struct manapool_t pool;
    set_mana(&pool,5);
    printf("Crystals in pool: %d\n",pool.crystals);

    struct card_t card;
    card.price = 5;
    if(can_put_card(card,pool)){
        printf("You can put the card\n");
    }
    else{
        printf("You don't have enough mana to put card that needs %d mana\n",card.price);
    }

    return 0;
}
