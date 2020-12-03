#include <string>
#include <iostream>
#include <Body.h>

using namespace std;

Body::Body(string i_color, float i_width, float i_height)
{
	this->color = i_color;
	this->width = i_width;
	this->height = i_height;
}

void Body::printBody()
{
	cout << "Color: " << this->color << endl << "Width: " << this->width << endl;
	cout << "Height: " << this->height << endl;
}

void Body::setValues(string i_color, float i_width, float i_height)
{
	this->color = i_color;
	this->width = i_width;
	this->height = i_height;
}