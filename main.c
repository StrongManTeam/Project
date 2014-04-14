#include <stdio.h>
#include "card.h"

int main()
{
    struct card_t attacker;
    struct card_t defender;

    attacker.attack = 2;
    attacker.health = 4;

    defender.attack = 4;
    defender.health = 2;

    switch(attack(&attacker,&defender)){
        case 0:printf("Cards destroyed !\n");
        break;

        case 1:printf("Attacker card wins !\n");
        break;

        case 2:printf("Defender card wins !\n");
        break;

        case 3:printf("Cards survived the battle !\n");
        break;
    }
    return 0;
}
