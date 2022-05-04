#include "Hand.h"

Hand::Hand()
{
hand_it = hand_of_cards.begin();

std::cout<<"Hand size:" <<hand_of_cards.size() <<"\n";
};

void Hand::AddCardToHand(Card added_card)
{
hand_of_cards.push_back(added_card);
};

int Hand::GetHandSize()
{
int hand_size = hand_of_cards.size();
return hand_size;
};

Card Hand::GetCard(int card_index)
{


Card current_card = hand_of_cards[card_index];

return current_card;

};