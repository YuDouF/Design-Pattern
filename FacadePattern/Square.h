#include <iostream>
#include "Shape.h"

class Square : public Shape
{
public:
	Square(){};
	~Square(){};
	void Draw(){
		std::cout << "Square Draw.\n";
	}
};