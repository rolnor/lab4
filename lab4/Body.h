#pragma once
#include <string>

class Body
{
	private:
		std::string color;
		float width, height;
	public:
		Body(std::string i_color = "none", float i_width = 0, float i_height = 0);
		void printBody();
		void setValues(std::string i_color, float i_width, float i_height);
};