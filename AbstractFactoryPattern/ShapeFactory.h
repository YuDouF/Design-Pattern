#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H
#include "Factory.h"
#include <string>

class Shape;
class ShapeFactory : public Factory
{
public:
	ShapeFactory(){}
	~ShapeFactory(){}
	Shape* GetShape(std::string type);
	Color* GetColor(std::string type);
};

#endif