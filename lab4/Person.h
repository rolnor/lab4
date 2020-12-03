#pragma once
#include <string>
#include <iostream>

class Person
{
	private:
		std::string name;
		std::string address;
		bool allowedToDrive;
	public:
		Person(std::string iName = "unknown", std::string iAddress = "unknown", bool iAllowedtodrive = false);
		void printPerson();
		void setValues(std::string iName, std::string iAddress, bool iAllowedtodrive);
};