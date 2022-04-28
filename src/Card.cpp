#include "Card.h"
#include <iostream>

//Size of all the cards
const sf::Vector2f Card::size = sf::Vector2f(100, 100);

//Health and attack font(for now)
sf::Font font;


//Constructor for each card
Card::Card(int hp, int attack, std::string name):
health(hp), attack(attack), name(name)
{

};

   
//Setters for minions
void Card::setHealth(int hp)
{
    this -> health = hp; 
};
void Card::setAttack(int attack)
{
    this -> attack = attack;
};
void Card::setName(std::string name)
{
    this -> name = name;
};

//Classic Init->Update->Draw->Destroy
   void Card::Initialize()
   {
       
       cardOutline.setPosition(sf::Vector2f(200, 100));
       cardOutline.setSize(size);

    //Setting up all the text on the card, obviously needs work 
    font.loadFromFile("/usr/share/fonts/truetype/fonts-beng-extra/ani.ttf");
       attackText.setCharacterSize(20);
       healthText.setCharacterSize(20);
       attackText.setString(std::to_string(attack));
       healthText.setString(std::to_string(health));
       attackText.setFillColor(sf::Color::Red);
       healthText.setFillColor(sf::Color::Blue);
       attackText.setFont(font);
       healthText.setFont(font);
       

       
   };



   void Card::Update(sf::RenderWindow &window)
   {
       attackText.setPosition(cardOutline.getPosition().x, cardOutline.getPosition().y + 50);
       healthText.setPosition(cardOutline.getPosition().x + 80, cardOutline.getPosition().y + 50);

        float mouse_position_x = sf::Mouse::getPosition(window).x;
        float mouse_position_y = sf::Mouse::getPosition(window).y;

        float card_A1 = cardOutline.getPosition().x;
        float card_A2 = cardOutline.getPosition().x + size.x;
        float card_B1 = cardOutline.getPosition().y;
        float card_B2 = cardOutline.getPosition().y + size.y;

        bool mouse_card_collision = false;
        if(mouse_position_x >= card_A1 && mouse_position_x <= card_A2 && mouse_position_y >= card_B1 && mouse_position_y <= card_B2)
        {

        mouse_card_collision = true;
        }


       if (mouse_card_collision == true && sf::Mouse::isButtonPressed(sf::Mouse::Left))
       {
           cardOutline.setPosition(mouse_position_x-50, mouse_position_y-50);
           cardOutline.setFillColor(sf::Color::Yellow);
       }
       
   };

   void Card::Draw(sf::RenderWindow &window)
   {
       window.draw(cardOutline);
       window.draw(attackText);
       window.draw(healthText);
   };
   void Destroy(){};
