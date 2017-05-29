#include "RedShapeDecorator.h"
#include "BuleShapeDecorator.h"
#include "Circle.h"
#include "Rectangle.h"
int main(){
	Circle* circle = new Circle();
	RedShapeDecorator* decorator = new RedShapeDecorator();
	decorator->Decorator(circle);
	BuleShapeDecorator* decorator1 = new BuleShapeDecorator();
	decorator1->Decorator(decorator);
	decorator1->Draw();
	Rectangle* rectangle = new Rectangle();
	RedShapeDecorator* decorator2 = new RedShapeDecorator();
	decorator2->Decorator(rectangle);
	decorator2->Draw();
}