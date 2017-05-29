#pragma once
#include "ShapeDecorator.h"
class BuleShapeDecorator : public ShapeDecorator{
private:
	void FillBuleBorder();
public:
	void Draw();
};