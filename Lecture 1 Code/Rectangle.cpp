#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(int _height, int _width){
    mHeight = _height;
	mWidth = _width;
}

void Rectangle::Display() const {
	std::cout << "H: " << mHeight << "\tW: " << mWidth << "\tP: " << Perimeter() << '\n';
}

int Rectangle::Perimeter() const
{
	return mHeight * 2 + mWidth * 2;
}
