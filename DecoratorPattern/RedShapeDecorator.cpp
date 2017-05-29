#include "RedShapeDecorator.h"
#include <iostream>
void RedShapeDecorator::Draw(){
	shape->Draw();
	FillRedBorder();
}
void RedShapeDecorator::FillRedBorder(){
	std::cout << "Fill Red Border.\n";
}