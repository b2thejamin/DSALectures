#include "person.h"
#include <iostream>	

person::person(const std::string& _name, unsigned int _age) {
	Set(_name, _age);
}

void person::Set(const std::string& _name, unsigned int _age)
{
	mName = _name;
	mAge = _age;
}
void person::display() const
{
	std::cout << "Name: " << mName << ", Age: " << mAge << std::endl;
}
