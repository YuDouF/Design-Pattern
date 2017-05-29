#pragma once
#include "Shape.h"
#include <iostream>

class Square : public Shape
{
public:
	Square(){};
	Square(const Square& s);
	~Square(){};
	void draw(){
		std::cout << "Square draw.\n";
	}
	Shape* Clone();
};