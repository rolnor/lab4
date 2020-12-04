#include <polyline.h>

Polyline::Polyline(int arraySize)
{
	pointArray = new Point2D[arraySize];
	this->arraySize = arraySize;
	this->xNull = NULL;
	this->yNull = NULL;
	this->freeSpaces = arraySize;
}

Polyline::~Polyline()
{
	delete[] pointArray;
}

void Polyline::getPoint(int requestedIndex)
{
	pointArray[requestedIndex].printValues();
}

int Polyline::numberOfPoints()
{
	int numberOfPoints = 0;
	for (int i = 0; i < this->arraySize; i++)
	{
		if (pointArray[i].getX() != this->xNull && pointArray[i].getY() != this->yNull)
			numberOfPoints++;
		else break;
	}
	return numberOfPoints;
}

void Polyline::addPoint(float x, float y)
{
	this->freeSpaces = this->arraySize - this->numberOfPoints();
	if (this->freeSpaces > 0)
	{
		pointArray[this->arraySize-this->freeSpaces].setX(x);
		pointArray[this->arraySize-this->freeSpaces].setY(y);
	}
	else cout << "Error: the Polyline is already full" << endl;
}

bool Polyline::containsPoint()
{
	if (this->numberOfPoints() > 0)
	{
		return true;
	}
	else return false;
}

void Polyline::removeLastPoint()
{
	this->freeSpaces = this->numberOfPoints()-1;
	if (this->freeSpaces >= 0)
	{
		pointArray[this->freeSpaces].setX(this->xNull);
		pointArray[this->freeSpaces].setY(this->yNull);
	}	
}

void Polyline::printLenght()
{
	double lineLenght = 0;
	if(this->containsPoint()) 
		for (int i = 0; i+1 < this->arraySize; i++)
		{
			if (pointArray[i + 1].getX() != this->xNull && pointArray[i + 1].getY() != this->yNull)
				lineLenght += pointArray[i].CalculateDistance(pointArray[i + 1]);
			else break;
		}
	cout << "Linelenght: " << lineLenght << endl;
}