#pragma once
#include <SFML/Graphics.hpp>
#include <map>
#include <iostream>
class ResourcesManager
{
public:
	ResourcesManager();
	void loadFont(std::string fontName,std::string fileName);
	void deleteFont(std::string fontName);
	const sf::Font getFont(std::string fontName);

	void loadTexture(std::string textureName, std::string filename);
	void deleteTexture(std::string textureName);
	const sf::Texture getTexture(std::string textureName);

	~ResourcesManager();
private:
	std::map <std::string,sf::Font> fonts;
	std::map <std::string,sf::Texture> textures;
	
};

