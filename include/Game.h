#pragma once
#include <SFML/Graphics.hpp>
#include "Card.h"

class Game
{

private:
sf::RenderWindow game_window;
int fps_limit = 60;




public:

Game();

void Run();
void Pause();
void End();


};