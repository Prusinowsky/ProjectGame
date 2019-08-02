#pragma once
#include <vector>
#include <SFML/Graphics.hpp>

class Mapper
{
private:
	std::vector < std::vector<int>> MapsObject;
	sf::Vector2f SizeOfSquare;

public:
	
	Mapper();
	void load();
	int getNumberOfRows();
	int getNumberOfColumns();
	std::vector<std::vector<int>>  getMap();
	sf::Vector2f getSizeOfSquare();
	~Mapper();
};

