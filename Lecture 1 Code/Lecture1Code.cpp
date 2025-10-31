// Lecture 1 Code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#if 0

#include <iostream>
#include "Rectangle.h"

template <typename Type>
void Print(const Type& _val) {
	std::cout << _val << '\n';
}

//void Print(int _val) {
//    std::cout << _val << '\n';
//}
//void Print(float _val) {
//    std::cout << _val << '\n';
//}
//void Print(char _val) {
//    std::cout << _val << '\n';
//}

class Example {
   public:
       Example(int _val = 0) {
           std::cout << "Default Constructor\n";
       }

       ~Example() {
		   std::cout << "Destructor\n";
       }

       Example(const Example& _ex){
           std::cout << "Copy Constructor\n";
	   }

       Example& operator=(const Example& _ex) {
           std::cout << "Assignment Operator\n";
           return *this;
       }
};

class String {
    char* mString;

public:

	// Constructor
    String(const char* _str = "Empty") {
        // get number of bytes to allocate
        size_t len = strlen(_str) + 1;

		// allocate memory
        mString = new char[len];

        // copy over the data
		strcpy_s(mString, len, _str);
    }

	// Destructor
    ~String() {
        delete[] mString;
    }

	// Copy Constructor
    String(const String& _str) {
        // get number of bytes to allocate
        size_t len = strlen(_str.mString) + 1;

        // allocate memory
        mString = new char[len];

        // copy over the data
        strcpy_s(mString, len, _str.mString);
    }

    String& operator=(const String& _str) {
        if (this != &_str) {
            //clean up
            delete[] mString;

            // Deep copy
			mString = new char[strlen(_str.mString) + 1];
			strcpy_s(mString, strlen(_str.mString) + 1, _str.mString);
        }
		return *this;
	}
};

int main()
{


    const int size = 10;
    int values[size];

    for (int i = 0; i < size; i++)
    {
        values[i] = i * 10;
	}
    for (int i = 0; i < size; i++) {
        std::cout << &values[i] << '\t' << values[i] << '\n';
    }
    std::cout << '\n';

	//pointer arithmetic
    // when you add to a pointer, it secretly adds the sizeof that type

    for (int i = 0; i < size; i++) {
        std::cout << (values + i) << '\t' << *(values + i) << '\n';
    }


	// Template function example

    Print(5);
	Print(5.5f);
	Print('A');




    //Default
    Example* e = new Example;
    delete e;

    std::cout << '\n';

	// copy constructor
    Example e1(10);
	Example copy1(e1); // 1st way to call copy constructor
	Example copy2 = e1; // 2nd way to call copy constructor

	std::cout << '\n';

	// Assignment operator
	e1 = copy1;



	// rule of 3 example

	String hello("Hello, World!");

    hello.Display();

    String world = hello;

	world.Display();

	String assign;
    assign = hello;

	assign.Display();


}

#endif
