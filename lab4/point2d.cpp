#include<point2d.h>

Point2D::Point2D()
{
	x = 0;
	y = 0;
}

Point2D::Point2D(float iX, float iY)
{
	x = iX;
	y = iY;
}

float Point2D::getX()
{
	return this->x;
}

float Point2D::getY()
{
	return this->y;
}

void Point2D::printValues()
{
	cout << x << endl << y;
}

Point2D::Point2D(const Point2D& copyFromObject) 
{
	x = copyFromObject.x;
	y = copyFromObject.y;
}

void Point2D::CalculateDistance(const Point2D& distantObject)
{
	double distance;
	distance = sqrt(pow((x - distantObject.x),2) + pow((y - distantObject.y), 2));
	cout << endl << distance;
}

string Point2D::toString()
{
	char buffer[20];
	sprintf_s(buffer,"[%f,%f]",x,y);
	return buffer;
}

Point2D& Point2D::operator+(const Point2D& addObject) 
{
	x += addObject.x;
	y += addObject.y;
	return *this; 
}

bool Point2D::operator==(const Point2D& compareObject)
{
	if (x == compareObject.x && y == compareObject.y)
		return true;
	else return false;
}

Point2D& Point2D::operator=(const Point2D& setObject)
{
	x = setObject.x;
	y = setObject.y;
	return *this;
}