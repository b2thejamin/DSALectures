#pragma once
#include <string>

class person
{
	std::string mName;
	unsigned int mAge;

public:
	person(const std::string& _name = "Empty", unsigned int _age = 0);

	void Set(const std::string& _name, unsigned int _age);
	void display() const;

};

