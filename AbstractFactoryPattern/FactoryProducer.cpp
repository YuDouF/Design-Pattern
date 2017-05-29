#include "FactoryProducer.h"
#include "ShapeFactory.h"
#include "ColorFactory.h"

Factory* FactoryProducer::GetFactory(std::string type){
	if (type == "Shape"){
		return new ShapeFactory();
	}
	else if (type == "Color"){
		return new ColorFactory();
	}
	return NULL;
}