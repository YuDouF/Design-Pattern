#ifndef Square_H
#define Square_H
#include <iostream>
#include "Shape.h"

class Square : public Shape
{
public:
	Square(){};
	~Square(){};
	void draw(){
		std::cout << "Square draw.\n";
	}
};

#endif