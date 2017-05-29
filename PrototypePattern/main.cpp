#include "Shape.h"
#include "ShapeFactory.h"

int main(int argc, char const *argv[])
{
	Shape* circleShape1 = ShapeFactory::GetShape("Circle");
	circleShape1->draw();
	Shape* circleShape2 = circleShape1->Clone();
	circleShape2->draw();

	Shape* squareShape1 = ShapeFactory::GetShape("Square");
	squareShape1->draw();
	Shape* squareShape2 = squareShape1->Clone();
	squareShape2->draw();

	
	delete circleShape1;
	delete circleShape2;
	delete squareShape1;
	delete squareShape2;
	return 0;
}