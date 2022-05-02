#pragma once 
#include <iostream>
#include "Card.h"


class Hand
{

private:
std::vector<Card> hand_of_cards;
int number_of_cards;


public:

Hand();

void AddCardToHand(Card added_card);
int GetHandSize();
Card GetCard(int card_index);


};