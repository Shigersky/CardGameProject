#pragma once
#include <SFML/Graphics.hpp>
#include "Player.h"

class Game
{

private:
sf::RenderWindow game_window;
int fps_limit = 60;
Player player;


public:

Game();

void Run();
void Pause();
void End();


};