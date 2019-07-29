#include "Drawer.h"
#include "Game.h"

Drawer* Drawer::instance = nullptr;

Drawer::Drawer()
{
}


Drawer * Drawer::getInstance()
{
	if (instance == nullptr)
		instance = new Drawer;
	return instance;
}


void Drawer::drawSquare(sf::Vector2i position, sf::Color color)
{
	sf::RectangleShape square;

	square.setPosition(static_cast<sf::Vector2f>(position));
	square.setFillColor(color);

	auto Game = Game::getInstance();
	auto window = Game->getWindow();

	window->draw(square);
}



Drawer::~Drawer()
{
}
