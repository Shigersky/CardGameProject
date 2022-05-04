#pragma once
#include <SFML/Graphics.hpp>
#include "Player.h"

class Game
{

private:
sf::RenderWindow game_window;
int fps_limit = 60;
Player user_player;
//Player opponent_player;


public:

Game();

void Run();
void Pause();
void End();


};