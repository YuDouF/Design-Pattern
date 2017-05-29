#include <iostream>
#include "Shape.h"

class Rectangle : public Shape
{
public:
	Rectangle(){};
	~Rectangle(){};
	void Draw(){
		std::cout << "Rectangle draw.\n";
	}
};