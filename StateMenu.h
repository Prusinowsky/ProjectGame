#pragma once
#include "StateInterface.h"
class StateMenu :
	public StateInterface
{
public:
	StateMenu();
	void handle();
	~StateMenu();
};

