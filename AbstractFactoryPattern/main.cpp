#include "Shape.h"
#include "Factory.h"
#include "Color.h"
#include "FactoryProducer.h"


int main(int argc, char const *argv[])
{
	Factory* shapeFactory = FactoryProducer::GetFactory("Shape");
	Shape* circleShape = shapeFactory->GetShape("Square");
	circleShape->draw();
	Factory* colorFactory = FactoryProducer::GetFactory("Color");
	Color* buleColor = colorFactory->GetColor("Red");
	buleColor->Fill();

	delete shapeFactory;
	delete circleShape;
	delete colorFactory;
	delete buleColor;
	return 0;
}