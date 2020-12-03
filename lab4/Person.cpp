#include <string>
#include<Person.h>

using namespace std;

Person::Person(std::string iName, std::string iAddress, bool iAllowedtodrive)
{
	this->name = iName;
	this->address = iAddress;
	this->allowedToDrive = iAllowedtodrive;
}

void Person::printPerson()
{
	cout << "Name: " << this->name << endl << "Address: " << this->address << endl;
	cout << "Allowed to drive: " << this->allowedToDrive << endl;
}

void Person::setValues(string iName,string iAddress,bool iAllowedtodrive)
{
	this->name = iName;
	this->address = iAddress;
	this->allowedToDrive = iAllowedtodrive;
}