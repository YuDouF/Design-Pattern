#include "ShapeMaker.h"
#include "Shape.h"
#include <iostream>
int main(){
	ShapeMaker* shapeMaker = new ShapeMaker();
	Shape* shape = NULL;
	for (int i = 0; i < 5; i++){
		shape = shapeMaker->GetShape(i);
		shape->Draw();
	}
	std::cout << "count: " << ShapeMaker::count << std::endl;
	for (int i = 0; i < 5; i++){
		shape = shapeMaker->GetShape(i);
		shape->Draw();
	}
	std::cout << "count: " << ShapeMaker::count << std::endl;
	for (int i = 5; i < 15; i++){
		shape = shapeMaker->GetShape(i);
		shape->Draw();
	}
	std::cout << "count: " << ShapeMaker::count << std::endl;
	
}