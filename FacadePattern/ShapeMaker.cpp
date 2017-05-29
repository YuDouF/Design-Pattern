#include "ShapeMaker.h"
#include "Circle.h"
#include "Square.h"
ShapeMaker::ShapeMaker(){
	cirlce = new Circle();
	square = new Square();
}
ShapeMaker::~ShapeMaker(){
	delete cirlce;
	delete square;
}
void ShapeMaker::DrawCircle(){
	cirlce->Draw();
}
void ShapeMaker::DrawSquare(){
	square->Draw();
}