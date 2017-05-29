#ifndef COLORFACTORY_H
#define COLORFACTORY_H
#include "Factory.h"

class Color;
class ColorFactory : public Factory
{
public:
	ColorFactory(){}
	~ColorFactory(){}
	Shape* GetShape(std::string type);
	Color* GetColor(std::string type);
};

#endif