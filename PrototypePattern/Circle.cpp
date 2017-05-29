#include "Circle.h"
#include "Shape.h"

Circle::Circle(const Circle& c){
	name = c.name;
}
Shape* Circle::Clone(){
	return new Circle(*this);
}