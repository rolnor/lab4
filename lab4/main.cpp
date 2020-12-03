#include<MotorVehicle.h>
#include<point2d.h>

void createObject();
void test2d();

int main()
{
	char choise = '0';
	while (choise != '3')
	{
		cout << "1. Task1: Create vehicle" << endl << "2. Task2: Point2d" << endl << "3. Exit" << endl;
		cin >> choise;
		switch(choise)
		{
			case '1':
				createObject();
				break;
			case '2':
				test2d();
				break;
			case '3':
				return 0;
		}
	}
};

void createObject()
{
	string iName,iLoc,iColor, model; 
	bool iDrive;
	float iWidth, iHeight, iDiam;
	int iTires,iCylnr;
	float* iTDiam;


	cout << "Driver Name: ";
	cin >> iName;
	cout << "Location: ";
	cin >> iLoc;
	cout << "Allowed to drive [0/1]: ";
	cin >> iDrive;

	cin.clear();

	cout << "Color: ";
	cin >> iColor;
	cout << "Width: ";
	cin >> iWidth;
	cout << "Height: ";
	cin >> iHeight;

	cout << "How many tires: ";
	cin >> iTires;

	iTDiam = new float[iTires];
	for (int i = 0; i < iTires; i++)
	{
		cout << "Enter diameter for tire nr " << i + 1 << ":";
		cin >> iTDiam[i];
	}

	cout << "Number of cylinders: ";
	cin >> iCylnr;

	cout << "Size in litres: ";
	cin >> iDiam;

	cout << "Model: ";
	cin >> model;

	MotorVehicle newVehicle(iName, iLoc, iDrive, iColor, iWidth, iHeight, iTires, iTDiam, iDiam, iCylnr, model);
	delete[] iTDiam;

	newVehicle.printValues();
}

void test2d()
{
	//1. create two points and calculate the distance between two points and print the result,
	Point2D a(1, 2);
	Point2D b(2, 4);
	cout << "---------------------------------" << endl;
	cout << "Point a: " << a.toString() << endl << "Point b: " << b.toString() << endl;
	cout << "---------------------------------" << endl;

	/*Point2D b = a;
	cout << "Point b: " << b.toString() << endl;
	if(a == b)
		cout << "Point a and b are equal"*/
}