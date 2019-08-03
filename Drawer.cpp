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


void Drawer::drawSquare(sf::Vector2i position, sf::Vector2f size, sf::Color color)
{
	sf::RectangleShape square;
	square.setPosition(sf::Vector2f(position));
	square.setSize(size);
	square.setFillColor(color);

	Game::getInstance()->getWindow()->draw(square);
}


Drawer::~Drawer()
{
}
