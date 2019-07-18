#pragma once
class Model
{
private:
	static Model* instance;
private:
	Model();
public:
	static Model* getInstance();
	~Model();
};

