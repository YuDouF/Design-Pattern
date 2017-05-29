#include "ShapeMaker.h"

int main(){
	ShapeMaker* shapeMaker = new ShapeMaker();
	shapeMaker->DrawCircle();
	shapeMaker->DrawSquare();

	delete shapeMaker;
}