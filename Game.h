#pragma once
#include "StateInterface.h"
#include "StateGame.h"

#include <SFML/Graphics.hpp>

class Game
{
private:
	static Game* instance;
	sf::RenderWindow* window;
	StateInterface* state = nullptr;
private:
	Game();
public:
	static Game* getInstance();
	int execute();
	sf::RenderWindow* getWindow();
	~Game();
};

