#pragma once

#include "Shape.h"

class Rectangle : public Shape
{
	int mHeight = 0;
	int mWidth = 0;
public:
	Rectangle(int _height = 0, int _width = 0);

	void Display() const override;
	int Perimeter() const override;
};

