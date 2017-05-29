#include <iostream>
#include "Shape.h"

class Circle : public Shape
{
public:
	Circle(){};
	~Circle(){};
	void Draw(){
		std::cout << "Circle Draw.\n";
	}
};