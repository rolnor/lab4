#pragma once
#include <point2d.h>


class Polyline
{
private:
	Point2D* pointArray;
	int arraySize;
	int xNull, yNull;
	int freeSpaces;
public:
	Polyline(int arraySize);
	~Polyline();
	void getPoint(int requestedIndex);
	void addPoint(float x, float y);
	void removeLastPoint();
	bool containsPoint();
	int numberOfPoints();
	void printLenght();
};