#pragma once
#include <map>
class Shape;
class ShapeMaker
{
private:
	std::map<int, Shape*> shapePool;
	
public:
	ShapeMaker(){};
	~ShapeMaker(){};
	Shape* GetShape(int type);
	static int count;
};