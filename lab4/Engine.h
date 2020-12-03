#pragma once
class Engine
{
private:
	float sizeInlitres;
	int numberOfCylinders;
public:
	Engine(float sizeL = 0, int numCyl = 0);
	void setValues(float sizeL, int numCyl);
	void printEngine();
};