#include "Game.h"
#include "Config.h"

Game* Game::instance = nullptr;

Game::Game() : state(new StateGame())
{
	auto config = Config::getInstance();
	window =  new sf::RenderWindow(sf::VideoMode(config->getWidth(), config->getHeight()), config->getTitle());
}

Game * Game::getInstance()
{
	if (instance == nullptr)
		instance = new Game;
	return instance;
}

sf::RenderWindow* Game::getWindow() {
	return window;
}

int Game::execute()
{
	state->handle();
	return 0;
}

Game::~Game()
{
	delete window;
}
