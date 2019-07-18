#pragma once
class Engine
{
private:
	static Engine* instance;
private:
	Engine();
public:
	static Engine* getInstance();
	void run();
	~Engine();
};

