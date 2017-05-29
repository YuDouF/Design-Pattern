#include "Circle.h"
#include "BuleCircle.h"
#include "RedCircle.h"

int main(){
	Shape* circle = new Circle();
	circle->SetDrawAPI(new BuleCircle());
	circle->Draw();

	delete circle;
}