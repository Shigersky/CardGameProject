#include "Deck.h"





Deck::Deck() 
{


};

void Deck::Shuffle()
{

};

Card Deck::GetFirstCard()
{

Card first_card = deck_of_cards.top();
deck_of_cards.pop();
return first_card;

};

int Deck::GetDeckSize()
{
    int number_of_cards = deck_of_cards.size();
    return number_of_cards;
};