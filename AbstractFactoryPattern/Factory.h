#ifndef FACTORY_H
#define FACTORY_H
#include <string>
class Shape;
class Color;
class Factory{
public:
	Factory(){}
	virtual ~Factory(){}
	virtual Shape* GetShape(std::string type) = 0;
	virtual Color* GetColor(std::string type) = 0;
};

#endif