#include <iostream>
#include <fstream>

#include "Mapper.h"
#include "Config.h"



Mapper::Mapper()
{
}

void Mapper::load()
{
	std::string mapname = Config::getInstance()->getMapFileName();
	std::fstream file(mapname, std::ios::in | std::ios::out);
	std::string line;
	while (!file.eof()) {
		file >> line;
		std::cout << line << std::endl;
	}
	file.close();
}


Mapper::~Mapper()
{
}
