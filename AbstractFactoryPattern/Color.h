#ifndef COLOR_H
#define COLOR_H
class Color{
public:
	Color(){}
	virtual ~Color(){}
	virtual void Fill() = 0;
};

#endif