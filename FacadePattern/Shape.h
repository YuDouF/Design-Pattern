#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
	Shape(){}
	virtual ~Shape(){}
	virtual void Draw() = 0;
};

#endif