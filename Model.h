#pragma once
#include "Mapper.h"

class Model
{
private:
	static Model* instance;
	Mapper map;
private:
	Model();
public:
	static Model* getInstance();
	~Model();
};

