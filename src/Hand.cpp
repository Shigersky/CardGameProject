#include "Hand.h"
#include <iostream>

Hand::Hand()

{


std::cout<<"Hand size:" <<hand_of_cards.size() <<"\n";

};


void Hand::AddCardToHand(Card * added_card)

{

    std::cout << "Adding card to hand...\n";
hand_of_cards.push_back(*added_card);

};


int Hand::GetHandSize()

{

int hand_size = hand_of_cards.size();
return hand_size;

};


Card Hand::GetCard(int x)

{


Card current_card = hand_of_cards[x];
//hand_of_cards.pop();

return current_card;

};

void Hand::Update(sf::RenderWindow &window)
{

    for (size_t i = 0; i < hand_of_cards.size(); i++)
    {

    //std::cout << "Updating hand\n";
    GetCard(i).Update(window);
        
    }
    

};

void Hand::Draw(sf::RenderWindow &window)
{



};