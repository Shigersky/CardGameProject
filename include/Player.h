#pragma once
#include "Deck.h"
#include "Hand.h"
#include <SFML/Graphics.hpp>

class Player
{

private:
int player_health;
int player_mana;
std::string player_name;
sf::Sprite player_icon_sprite;
sf::Texture player_icon_texture;

public:
Deck player_deck;
Hand player_hand;

Player(int hp, int mana, std::string name);

void Update();

void DrawPlayerHand(sf::RenderWindow &window);

void DrawPlayerIcon(sf::RenderWindow &window);

void Draw(Deck player_deck, Hand player_hand, int x);


};