#pragma once
#include "ShapeDecorator.h"
class RedShapeDecorator : public ShapeDecorator{
private:
	void FillRedBorder();
public:
	void Draw();
};