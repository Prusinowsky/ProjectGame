#pragma once
class Drawer
{
private:
	static Drawer* instance;
private:
	Drawer();
public:
	static Drawer* getInstance();
	~Drawer();
};

