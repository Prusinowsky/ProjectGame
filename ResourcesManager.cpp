#include "ResourcesManager.h"



ResourcesManager::ResourcesManager()
{
}

void ResourcesManager::loadFont(std::string fontName, std::string fileName)
{
	sf::Font fontToLoad;
	if (fontToLoad.loadFromFile(fileName)) this->fonts[fontName] = fontToLoad;  ///Loading font from file and adding it to map
	else std::cout << "Loading error, font: " << fileName << std::endl; ///Error message
}

void ResourcesManager::deleteFont(std::string fontName)
{
	this->fonts.erase(fontName); ///Deleting font from map
}

const sf::Font ResourcesManager::getFont(std::string fontName)
{
	return this->fonts.at(fontName); ///Returning font that we want
}

void ResourcesManager::loadTexture(std::string textureName, std::string filename)
{
	sf::Texture textureToLoad;
	if (textureToLoad.loadFromFile(filename)) this->textures[textureName] = textureToLoad;  ///Loading font from file and adding it to map
	else std::cout << "Loading error, texture: " << filename << std::endl; ///Error message
}

void ResourcesManager::deleteTexture(std::string textureName)
{
	this->textures.erase(textureName); ///Deleting texture from map
}

const sf::Texture ResourcesManager::getTexture(std::string textureName)
{
	return this->textures.at(textureName); ///Returning texture that we want
}


ResourcesManager::~ResourcesManager()
{
}
