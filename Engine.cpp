#include "Engine.h"
#include "Model.h"

#include "Game.h"
#include <SFML/Graphics.hpp>

Engine* Engine::instance = nullptr;

Engine::Engine()
{
}

Engine* Engine::getInstance() {
	if (instance == nullptr)
		instance = new Engine;
	return instance;
}

void Engine::run()
{
	Model::getInstance();
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);
	auto window = Game::getInstance()->getWindow();

	while (window->isOpen())
	{
		sf::Event event;
		while (window->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window->close();
		}

		window->clear();
		window->draw(shape);
		window->display();
	}
}

Engine::~Engine()
{
}
