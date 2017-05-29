#include "ColorFactory.h"
#include "BuleColor.h"
#include "RedColor.h"

Shape* ColorFactory::GetShape(std::string type){
	return NULL;
}

Color* ColorFactory::GetColor(std::string type){
	if (type == "Bule"){
		return new BuleColor();
	}
	else if (type == "Red"){
		return new RedColor();
	}

	return NULL;
}