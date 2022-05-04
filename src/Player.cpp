#include "Player.h"

Player::Player(int hp, int mana, std::string name) : player_hand(), player_deck()
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
  window.draw(player_icon_sprite);
  
};

void Player::Draw(Deck &player_deck, Hand &player_hand, int x)
{

    for (size_t i = 0; i < x; i++)
    {
        player_hand.AddCardToHand(player_deck.GetFirstCard());
    }
    
};
