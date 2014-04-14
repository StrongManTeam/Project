#include "card.h"

int attack(struct card_t *attacker,struct card_t *defender){
    defender->health = defender->health - attacker->attack;
    attacker->health = attacker->health - defender->attack;

    if(attacker->health <= 0 & defender->health <= 0){
        return 0;
    }
    if(attacker->health > 0 & defender->health <= 0){
        return 1;
    }
    if(attacker->health <= 0 & defender->health > 0){
        return 2;
    }
    if(attacker->health > 0 & defender->health > 0){
        return 3;
    }
}
