#include "Model.h"

Model* Model::instance = nullptr;

Model::Model()
{
	map.load();
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
