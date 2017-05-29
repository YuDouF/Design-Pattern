#include "Shape.h"
#include "ShapeFactory.h"

int main(int argc, char const *argv[])
{
	Shape* circleShape = ShapeFactory::GetShape("Circle");
	circleShape->draw();
	Shape* squareShape = ShapeFactory::GetShape("Square");
	squareShape->draw();


	delete circleShape;
	delete squareShape;
	return 0;
}