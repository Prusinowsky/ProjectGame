#include "Drawer.h"

Drawer* Drawer::instance = nullptr;

Drawer::Drawer()
{
}


Drawer * Drawer::getInstance()
{
	if (instance == nullptr)
		instance = new Drawer;
	return instance;
}


Drawer::~Drawer()
{
}
