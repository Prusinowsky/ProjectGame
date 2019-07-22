#pragma once
#include <string>

class Config
{
private:
	static Config* instance;
private:
	Config();
public:
	static Config* getInstance();
	std::string getTitle();
	std::string getMapFileName();
	int getWidth();
	int getHeight();
	~Config();
};

