#pragma once
#include <SFML/Graphics.hpp>

class Card 
{
    private: 
    int health;
    int attack;
    std::string name;

    public:
    const static sf::Vector2f size;
    sf::RectangleShape cardOutline;
    

    sf::Text attackText;
    sf::Text healthText;
    

    Card(int hp, int attack, std::string name);

    void Initialize();
    void Update();
    void Draw(sf::RenderWindow &window);
    void Destroy();

    void setHealth(int hp);
    void setAttack(int attack);
    void setName(std::string name);
};