#include "ShapeMaker.h"
#include "Circle.h"
int ShapeMaker::count = 0;
Shape* ShapeMaker::GetShape(int type){
	std::map<int, Shape*>::iterator it = shapePool.find(type);
	if (it == shapePool.end()){
		Circle* circle = new Circle();
		shapePool.insert(std::map<int, Shape*>::value_type(type, circle));
		++count;
		return circle;
	}
	else{
		return it->second;
	}
}