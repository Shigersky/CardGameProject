#include "Game.h"
#include "Card.h"
#include "Player.h"
#include <iostream>

Card testCard(10, 10, "Gigachad");
Card * test_card_pointer = &testCard;




Game::Game() : game_window(sf::VideoMode(800,600), "CardGame", sf::Style::Default) , user_player(10, 10, "Player") 

{

game_window.setFramerateLimit(fps_limit);

}


//Main game loop
void Game::Run()
{

std::cout<<"Game ran\n";

//user_player.Draw(user_player.player_deck, user_player.player_hand, 1);
user_player.player_hand.AddCardToHand(test_card_pointer);




    while (game_window.isOpen())
    {
       
        sf::Event event;
        while (game_window.pollEvent(event))
        {

            user_player.player_hand.Update(game_window);
            if (event.type == sf::Event::Closed)
            Game::End();
            

        }

        game_window.clear();
        //testCard.Draw(game_window);
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
    user_player.player_deck.Destroy();
                game_window.close();
                std::cout<< "Window has been closed \n";

}