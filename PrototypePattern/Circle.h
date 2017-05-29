#pragma once
#include "Shape.h"
#include <iostream>

class Circle : public Shape
{
public:
	Circle(){};
	Circle(const Circle& c);
	~Circle(){};
	void draw(){
		std::cout << "Circle draw.\n";
	}
	Shape* Clone();
};