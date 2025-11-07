#include <string>
#include <iostream>
#include "person.h"

std::string RandomName();

int main()
{
    srand(unsigned int(time(nullptr)));
    
    for (int i = 0; i < 20; i++){
		std::cout << RandomName() << std::endl;
    }

	return 0; 
}


std::string RandomName()
{
    std::string name;
    int len = rand() % 6 + 3;

    for (int i = 0; i < len; i++) {
		name += 'a' + rand() % 26;

		name[0] = toupper(name[0]);
	}
    return name;
}

