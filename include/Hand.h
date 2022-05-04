#pragma once 
#include <stack>
#include "Card.h"


class Hand
{

private:
int number_of_cards;



public:
std::stack<Card> hand_of_cards;

Hand();

void Update();
void AddCardToHand(Card * added_card);
int GetHandSize();
Card GetCard();


};