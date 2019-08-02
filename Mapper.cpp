#include <iostream>
#include <fstream>
#include <vector>

#include "Mapper.h"
#include "Config.h"

/*0 - wolne miejsce
  1 - œciana
  2 - coin
*/


Mapper::Mapper()
{
	
}

void Mapper::load()
{
	std::vector<int> temp;
	std::string mapname = Config::getInstance()->getMapFileName();
	std::fstream file(mapname, std::ios::in | std::ios::out);
	std::string line;
	while (!file.eof()) {

		std::getline(file, line);
		for (int i = 0; i < line.size(); i++) {

			if (line[i] != ' ') temp.push_back(line[i] - 48);
		
		}
		this -> MapsObject.push_back(temp);
		
		temp.clear();
	}

	file.close();
}

int Mapper::getNumberOfColumns()
{
	return MapsObject.size();

}

int Mapper::getNumberOfRows()
{
	return MapsObject[0].size();

}

std::vector<std::vector<int>> Mapper::getMap()
{
	return MapsObject;
}

sf::Vector2f Mapper::getSizeOfSquare() 
{
	
	SizeOfSquare.x = (float)Config::getInstance()->getWidth() / getNumberOfColumns();
	SizeOfSquare.y = (float)Config::getInstance()->getHeight() / getNumberOfRows();

	return SizeOfSquare;
}

Mapper::~Mapper()
{
}
