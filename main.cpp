#include "Game.h"

#include <iostream>

int main()
{	
	auto game = Game::getInstance();
	return game->execute();
}