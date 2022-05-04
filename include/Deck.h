#pragma once
#include "SFML/Graphics.hpp"
#include "Card.h"
#include <stack>

class Deck
{

private:
int number_of_cards;


public:
std::stack<Card> deck_of_cards;
Deck();


void Shuffle();
Card * GetFirstCard();
int GetDeckSize();
Card CreateRandomCard(int random_card_index);
void Destroy();
};