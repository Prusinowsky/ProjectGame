#pragma once

class StateInterface
{
public:
	StateInterface();
	virtual void handle() = 0;
	virtual ~StateInterface();
};

