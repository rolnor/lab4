#include<MotorVehicle.h>
using namespace std;

MotorVehicle::MotorVehicle(string iName, string iLoc, bool iDrive, string iColor, float iWidth, 
						   float iHeight, int iTires,float iDiam[], float iSizeL, int iCylnr, string iModel)
{
	owner.setValues(iName, iLoc, iDrive);
	body.setValues(iColor, iWidth, iHeight);
	engine.setValues(iSizeL, iCylnr);
	numberOfTires = iTires;
	tireDiameters = new float[numberOfTires];
	for (int i = 0; i < numberOfTires; i++)
	{
		tireDiameters[i] = iDiam[i];
	}
	model = iModel;
}

MotorVehicle::~MotorVehicle()
{
	delete[] tireDiameters;
}

void MotorVehicle::printValues()
{
	cout << "----------------------------------------------" << endl;
	owner.printPerson();
	body.printBody();
	engine.printEngine();
	cout << "numberOfTires: " << numberOfTires << endl;
	for(int i = 0; i < numberOfTires; i++)
	{
		cout << "Tire " << i + 1 << " size: " << tireDiameters[i] << endl;
	}
	cout << "model: " << model << endl;
	cout << "----------------------------------------------" << endl;
}