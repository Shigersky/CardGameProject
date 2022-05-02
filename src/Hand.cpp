#include "Hand.h"

Hand::Hand()
{

};

void Hand::AddCardToHand(Card added_card)
{
hand_of_cards.emplace_back(added_card);
};