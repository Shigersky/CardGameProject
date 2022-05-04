#pragma once 
#include <iostream>
#include "Card.h"


class Hand
{

private:
int number_of_cards;



public:
std::vector<Card> hand_of_cards;

Hand();

void Update(sf::RenderWindow &window);
void Draw(sf::RenderWindow &window);
void AddCardToHand(Card * added_card);
int GetHandSize();
Card GetCard(int x);


};