#include "ShapeFactory.h"
#include "Shape.h"
#include "Circle.h"
#include "Square.h"


Shape* ShapeFactory::GetShape(std::string type){
	if(type == "Circle"){
		return new Circle();
	}else if(type == "Square"){
		return new Square();
	}
	return NULL;
}