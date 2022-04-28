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

void Player::DrawPlayerIcon(sf::RenderWindow &window)
{

window.draw(player_icon_sprite);

};