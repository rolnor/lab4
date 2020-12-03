#pragma once
#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
#include <stdio.h>
using namespace std;

class Point2D
{
private:
	float x, y;
public:
	Point2D();
	Point2D(float iX, float iY);
	Point2D(const Point2D& copyFromObject);
	void printValues();
	void CalculateDistance(const Point2D& distantObject);
	Point2D& operator+(const Point2D& addObject);
	bool operator==(const Point2D& compareObject);
	Point2D& operator=(const Point2D& addObject);
	string toString();
	float getX();
	float getY();
};