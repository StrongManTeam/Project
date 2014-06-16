#ifndef _CARD_
#define _CARD_

struct card_t{
    char* name;
    int attack;
    int health;
    int price;
};

int attack(struct card_t *attacker,struct card_t *defender);

#endif
