#ifndef REDCOLOR_H
#define REDCOLOR_H
#include "Color.h"
#include <iostream>
class RedColor : public Color{
public:
	void Fill(){
		std::cout << "Red Filled.\n";
	}
};

#endif
