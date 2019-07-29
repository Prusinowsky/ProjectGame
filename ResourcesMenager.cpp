#include "ResourcesMenager.h"



ResourcesMenager::ResourcesMenager()
{
}

void ResourcesMenager::loadFont(std::string fontName, std::string fileName)
{
	sf::Font fontToLoad;
	if (fontToLoad.loadFromFile(fileName)) this->fonts[fontName] = fontToLoad;  ///Loading font from file and adding it to map
	else std::cout << "Loading error, font: " << fileName << std::endl; ///Error message
}

void ResourcesMenager::deleteFont(std::string fontName)
{
	this->fonts.erase(fontName);
}

sf::Font & ResourcesMenager::getFont(std::string fontName)
{
	return this->fonts.at(fontName); ///Returning font that we want
}

void ResourcesMenager::loadTexture(std::string textureName, std::string filename)
{
	sf::Texture textureToLoad;
	if (textureToLoad.loadFromFile(filename)) this->textures[textureName] = textureToLoad;  ///Loading font from file and adding it to map
	else std::cout << "Loading error, texture: " << filename << std::endl; ///Error message
}

void ResourcesMenager::deleteTexture(std::string textureName)
{
	this->textures.erase(textureName);
}

sf::Texture & ResourcesMenager::getTexture(std::string textureName)
{
	return this->textures.at(textureName); ///Returning texture that we want
}


ResourcesMenager::~ResourcesMenager()
{
}
