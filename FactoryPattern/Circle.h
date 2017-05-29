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