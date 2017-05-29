#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include "Shape.h"

class Circle : public Shape
{
public:
	Circle(){};
	~Circle(){};
	void draw(){
		std::cout << "Circle draw.\n";
	}
};

#endif