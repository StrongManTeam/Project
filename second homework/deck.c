#include "deck.h"

int push_card(struct card_t card_to_push, struct deck_t *player_deck){
    if(player_deck->top < 30){
        player_deck->cards[player_deck->top++] = card_to_push;
        return 0;
    }
    return -1;
}

int draw_card(struct deck_t *player_deck, struct card_t *card){
    if(player_deck->top > 0){
        *card = player_deck->cards[--player_deck->top];
        return 0;
    }
    return -1;
}

int look_card(struct deck_t *player_deck, struct card_t *card){
    if(player_deck > 0){
        *card = player_deck->cards[player_deck->top - 1];
        return 0;
    }
    return -1;
}
