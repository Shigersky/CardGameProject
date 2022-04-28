#include "Game.h"
#include "Card.h"
#include <iostream>

Card testCard(10, 10, "Gigachad");


Game::Game() : game_window(sf::VideoMode(800,600), "CardGame", sf::Style::Default)
{

game_window.setFramerateLimit(fps_limit);

}

void Game::Run()
{

std::cout<<"Game ran\n";




testCard.Initialize();






    while (game_window.isOpen())
    {
       
        sf::Event event;
        while (game_window.pollEvent(event))
        {
            testCard.Update(game_window);

            if (event.type == sf::Event::Closed)
            {
                game_window.close();
                std::cout<< "Window has been closed \n";
            }

        }

        game_window.clear();
        testCard.Draw(game_window);
        game_window.display();
    }

}

void Game::Pause()
{

}

void Game::End()
{

}