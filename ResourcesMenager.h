#pragma once
#include <SFML/Graphics.hpp>
#include <map>
#include <iostream>
class ResourcesMenager
{
public:
	ResourcesMenager();
	void loadFont(std::string fontName,std::string fileName);
	void deleteFont(std::string fontName);
	sf::Font &getFont(std::string fontName);

	void loadTexture(std::string textureName, std::string filename);
	void deleteTexture(std::string textureName);
	sf::Texture &getTexture(std::string textureName);

	~ResourcesMenager();
private:
	std::map <std::string,sf::Font> fonts;
	std::map <std::string,sf::Texture> textures;
	
};

