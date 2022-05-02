#pragma once
#include "Deck.h"
#include "Hand.h"
#include <SFML/Graphics.hpp>

class Player
{

private:
Deck player_deck;
Hand player_hand;
int player_health;
int player_mana;
std::string player_name;
sf::Sprite player_icon_sprite;
sf::Texture player_icon_texture;

public:

Player(int hp, int mana, std::string name);

void DrawPlayerIcon(sf::RenderWindow &window);

};