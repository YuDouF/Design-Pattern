#include "BuleShapeDecorator.h"
#include <iostream>
void BuleShapeDecorator::Draw(){
	shape->Draw();
	FillBuleBorder();
}
void BuleShapeDecorator::FillBuleBorder(){
	std::cout << "Fill Bule Border.\n";
}