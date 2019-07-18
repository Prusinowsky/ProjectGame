#include "StateGame.h"

#include "Engine.h"



StateGame::StateGame()
{
}

void StateGame::handle()
{
	Engine::getInstance()->run();
}


StateGame::~StateGame()
{
}
