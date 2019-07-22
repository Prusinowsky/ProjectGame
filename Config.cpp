#include "Config.h"

Config* Config::instance = nullptr;

Config::Config() 
{

}


Config * Config::getInstance()
{
	if (instance == nullptr)
		instance = new Config;
	return instance;
}

std::string Config::getTitle()
{
	return std::string("Game");
}

std::string Config::getMapFileName()
{
	return std::string("file.txt");
}

int Config::getWidth() {
	return 500;
}

int Config::getHeight() {
	return 500;
}


Config::~Config()
{
}
