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
       attackText.setPosition(cardOutline.getPosition().x, cardOutline.getPosition().y + 50);
       healthText.setPosition(cardOutline.getPosition().x + 80, cardOutline.getPosition().y + 50);

       
   };



   void Card::Update(){};
   void Card::Draw(sf::RenderWindow &window)
   {
       window.draw(cardOutline);
       window.draw(attackText);
       window.draw(healthText);
   };
   void Destroy(){};
