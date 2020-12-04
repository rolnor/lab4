#include<MotorVehicle.h>
#include<point2d.h>
#include <polyline.h>

void createObject();
void test2d();
void polylineTest();

int main()
{
	char choise = '0';
	while (choise != '4')
	{
		cout << "1. Task1: Create vehicle" << endl << "2. Task2: Point2d" << endl << "3. Task 3: Polyline" << endl << "4. Exit" << endl;
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
				polylineTest();
				break;
			case '4':
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

	// 2. create a new point by using either the copy constructor or operator (=),
	Point2D c = a;

	// 3. print the field values of the new point, and do a comparison with a and b to see which point 
	//    has the same value with the newly created point,
	cout << "Point C: " << c.toString() << endl;
	cout << "Point C is equal to A: " << (a == c) << endl;
	cout << "Point C is equal to B: " << (b == c) << endl;

	// 4. create a new point by using the + operator 
	//    (i.e. add two existing point objects and assign the result to a new object)
	Point2D d = a + b;

	// 5. print the value of the new point and calculate the distance between any other point with new one,
	cout << "Point D: " << d.toString() << endl;
	cout << "Distance from D to point A: " << d.CalculateDistance(a) << endl;

	// 6. and compare the new point with other points to see whether the new point is really a new or has the 
	//    same value some other point. (make sure that the other points’ values are not all 0)
	cout << "Point D is equal to A: " << (d == a) << endl;
	cout << "Point D is equal to B: " << (d == b) << endl;
	cout << "Point D is equal to B: " << (d == c) << endl;
	cout << "---------------------------------" << endl;
}

void polylineTest()
{
	Polyline test(3);
	cout << "---------------------------------" << endl;
	cout << "Contains points: " << test.containsPoint() << endl;
	test.addPoint(1.0, 2.0);
	cout << "Added point: ";
	test.getPoint(0);
	cout << "Contains points: " << test.containsPoint() << endl;
	cout << "Number of points: " << test.numberOfPoints() << endl;
	test.addPoint(4.0, 2.0);
	cout << "Added point: ";
	test.getPoint(1);
	test.removeLastPoint();
	test.addPoint(3.0, 2.0);
	cout << "Removed last point and added point: ";
	test.getPoint(1);
	test.addPoint(2.0, 4.0);
	cout << "Added point: ";
	test.getPoint(2);
	cout << "Number of points: " << test.numberOfPoints() << endl;
	test.printLenght();
	// add point to full polyline
	cout << "Adding point to full polyline...";
	test.addPoint(2.0, 4.0);
	cout << "---------------------------------" << endl;
}