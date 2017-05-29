#ifndef SHAPE_H
#define SHAPE_H
#include <string>

class Shape {
protected:
	std::string name;
public:
	Shape(){}
	virtual ~Shape(){}
	virtual void draw() = 0;
	virtual Shape* Clone() = 0;
};

#endif