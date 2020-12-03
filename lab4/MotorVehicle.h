#pragma once
#include <Person.h>
#include <Body.h>
#include <Engine.h>

using namespace std;

class MotorVehicle
{
	private:
		Person owner;
		Body body;
		Engine engine;
		float* tireDiameters;
		int numberOfTires;
		std::string model;
	public:
		MotorVehicle(string iName, string iLoc, bool iDrive, string iColor, float iWidth, 
			         float iHeight, int iTires, float iDiam[], float iSizeL, int iCylnr, string iModel);
		~MotorVehicle();
		void printValues();

};