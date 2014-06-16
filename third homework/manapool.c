#include "manapool.h"

int can_put_card(struct card_t card_to_put, struct manapool_t pool){
    if(pool.crystals >= card_to_put.price){
        return 1;
    }
    return 0;
}

int set_mana(struct manapool_t *pool, int ammount){
    if(ammount >= 0 && ammount <= 10){
        pool->crystals = ammount;
        return 1;
    }
    return 0;
}
