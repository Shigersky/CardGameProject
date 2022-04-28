#include <iostream>
#include <SFML/Graphics.hpp>
#include <Card.h>


int main()
{

Card testCard = Card(10, 10, "Test Card");

sf::RenderWindow window(sf::VideoMode(800, 600), "Card Game");
window.setFramerateLimit(60);



testCard.Initialize();






    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            testCard.Update(window);

            if (event.type == sf::Event::Closed)
                window.close();

        }
        window.clear();
        testCard.Draw(window);
        window.display();
    }

    
    

return 0;
}