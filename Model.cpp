#include "Model.h"
#include <iostream>

Model* Model::instance = nullptr;

Model::Model()
{
	map.load();
	sf::Vector2f size = map.getSizeOfSquare();
	std::cout << size.x;
	std::cout << size.y;
	
}


Model * Model::getInstance()
{
	if (instance == nullptr)
		instance = new Model;
	return instance;
}

Model::~Model()
{
}
