#include "Model.h"

Model* Model::instance = nullptr;

Model::Model()
{
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
