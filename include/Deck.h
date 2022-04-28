#pragma once
#include "SFML/Graphics.hpp"
#include "Card.h"
#include <iostream>

class Deck
{

private:
std::vector<Card> deck_of_cards;
int number_of_cards;


public:
Deck();
void Shuffle();
void Draw();

};