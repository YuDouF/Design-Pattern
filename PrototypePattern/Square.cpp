#include "Square.h"
#include "Shape.h"

Square::Square(const Square& s){
	name = s.name;
}
Shape* Square::Clone(){
	return new Square(*this);
}