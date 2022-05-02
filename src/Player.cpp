#include "Player.h"

Player::Player(int hp, int mana, std::string name)
{

    player_health = hp;
    player_mana = mana;
    player_name = name;
    player_icon_texture.loadFromFile("/home/to/Desktop/projects/C++/CardGameProject/assets/download.jpeg");
    player_icon_sprite.setTexture(player_icon_texture);
    player_icon_sprite.setScale(0.2, 0.2);

};

void Player::Update()
{

};

void Player::DrawPlayerHand(sf::RenderWindow &window)
{
  for (size_t i = 0; i < player_hand.GetHandSize(); i++)
  {
      Card current_card = player_hand.GetCard(i);
      current_card.Draw(window);
  }
  
};

void Player::DrawPlayerIcon(sf::RenderWindow &window)
{

window.draw(player_icon_sprite);

};

void Draw(Deck &player_deck, Hand &player_hand)
{
    player_hand.AddCardToHand(player_deck.GetFirstCard());
};
