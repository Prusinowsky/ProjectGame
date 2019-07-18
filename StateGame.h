#pragma once
#include "StateInterface.h"
class StateGame :
	public StateInterface
{
public:
	StateGame();
	void handle();
	~StateGame();
};

