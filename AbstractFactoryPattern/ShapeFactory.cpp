#include "ShapeFactory.h"
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

Color* ShapeFactory::GetColor(std::string type){
	return NULL;
}