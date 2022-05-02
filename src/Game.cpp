#include "Game.h"
#include "Card.h"
#include "Player.h"
#include <iostream>

Card testCard(10, 10, "Gigachad");


Game::Game() : game_window(sf::VideoMode(800,600), "CardGame", sf::Style::Default) , player(10, 10, "Player")
{

game_window.setFramerateLimit(fps_limit);

}


//Main game loop
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
            Game::End();
            

        }

        game_window.clear();
        testCard.Draw(game_window);
        player.DrawPlayerIcon(game_window);
        game_window.display();
    }

}


//WIP 
void Game::Pause()
{

}


//Closes the window
void Game::End()
{
                game_window.close();
                std::cout<< "Window has been closed \n";

}