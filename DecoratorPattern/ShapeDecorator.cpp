#include "ShapeDecorator.h"
#include <iostream>
void ShapeDecorator::Decorator(Shape* s){
	shape = s;
}
void ShapeDecorator::Draw(){
	if (shape != NULL){
		shape->Draw();
	}
}