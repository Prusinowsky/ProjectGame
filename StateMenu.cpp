#include "StateMenu.h"

#include "Engine.h"

StateMenu::StateMenu()
{
}

void StateMenu::handle()
{
	Engine::getInstance()->run();
}


StateMenu::~StateMenu()
{
}
