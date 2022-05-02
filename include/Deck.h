#pragma once
#include "SFML/Graphics.hpp"
#include "Card.h"
#include <stack>

class Deck
{

private:
std::stack<Card> deck_of_cards;
int number_of_cards;


public:
Deck();
void Shuffle();
Card GetFirstCard();
int GetDeckSize();
};