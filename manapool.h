#ifndef _MANAPOOL_
#define _MANAPOOL_
#include "deck.h"

struct manapool_t{
    int crystals;
};

int can_put_card(struct card_t card_to_put, struct manapool_t pool);
int set_mana(struct manapool_t *pool, int ammount);

#endif // _MANAPOOL_
