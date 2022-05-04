#include "Deck.h"
#include <iostream>

Deck::Deck() 
{

    Deck::CreateRandomCard(1);
    std::cout<<"Card created\n";



};

void Deck::Shuffle()
{

};

Card * Deck::GetFirstCard()
{

Card *first_card = &deck_of_cards.top();
deck_of_cards.pop();
return first_card;

};

int Deck::GetDeckSize()
{
    int number_of_cards = deck_of_cards.size();
    return number_of_cards;
};

Card Deck::CreateRandomCard(int random_card_index)
{
    Card *created_card = new Card(rand(),rand(), "Random Card" + std::to_string(random_card_index));
    return *created_card;
}

void Deck::Destroy()
{

while (!deck_of_cards.empty())
{
    Card * current_card_pointer = GetFirstCard();
    current_card_pointer->Destroy(current_card_pointer);

}

std::cout << "Deck Destroyed\n";

};