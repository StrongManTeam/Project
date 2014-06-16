#include <stdio.h>
#include "deck.h"

int main()
{
    struct deck_t deck;
    int i;
    for(i = 0; i < 30; i++){
        deck.cards[i].attack = 0;
        deck.cards[i].health = 0;
        deck.cards[i].price = 0;
    }
    deck.top = 0;

    struct card_t card;
    card.name = "Karta";
    card.attack = 5;
    card.health = 2;
    card.price = 0;

    push_card(card,&deck);
    printf("Pushed card: Name: %s|Attack: %d|Health: %d|Price(mana): %d\n",deck.cards[deck.top - 1].name,deck.cards[deck.top - 1].attack
           ,deck.cards[deck.top - 1].health,deck.cards[deck.top - 1].price);

    card.name = "";
    card.attack = 0;
    card.health = 0;
    card.price = 0;
    look_card(&deck,&card);
    printf("Looked card: Name: %s|Attack: %d|Health: %d|Price(mana): %d\n",card.name,card.attack,card.health,card.price);

    return 0;
}
