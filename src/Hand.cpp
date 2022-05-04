#include "Hand.h"
#include <iostream>

Hand::Hand()
{


std::cout<<"Hand size:" <<hand_of_cards.size() <<"\n";

};


void Hand::AddCardToHand(Card * added_card)
{
    std::cout << "Adding card to hand...\n";
hand_of_cards.push(*added_card);

};


int Hand::GetHandSize()
{

int hand_size = hand_of_cards.size();
return hand_size;

};


Card Hand::GetCard()

{


Card current_card = hand_of_cards.top();
hand_of_cards.pop();

return current_card;

};

void Update()
{

};