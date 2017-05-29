#ifndef BULECOLOR_H
#define BULECOLOR_H
#include "Color.h"
#include <iostream>
class BuleColor : public Color{
public:
	void Fill(){
		std::cout << "Bule Filled.\n";
	}
};

#endif
