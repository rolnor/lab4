#include <iostream>
#include<Engine.h>

using namespace std;

Engine::Engine(float sizeL, int numCyl)
{
	this->sizeInlitres = sizeL;
	this->numberOfCylinders = numCyl;
}

void Engine::setValues(float sizeL, int numCyl)
{
	this->sizeInlitres = sizeL;
	this->numberOfCylinders = numCyl;
}

void Engine::printEngine()
{
	cout << "Size (l): " << this->sizeInlitres << endl << "Number of cylinders: " << this->numberOfCylinders << endl;
}


