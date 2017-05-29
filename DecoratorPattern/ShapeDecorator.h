#pragma once
#include "Shape.h"

class ShapeDecorator : public Shape
{
protected:
	Shape* shape;
public:
	virtual ~ShapeDecorator(){}
	void Decorator(Shape* s);
	void Draw();
};