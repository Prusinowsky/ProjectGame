#pragma once
#include <SFML/Graphics.hpp>
class Drawer
{
private:
	static Drawer* instance;
private:
	Drawer();
public:
	static Drawer* getInstance();
	void drawSquare(sf::Vector2i position, sf::Vector2f size, sf::Color color);
	~Drawer();
};

