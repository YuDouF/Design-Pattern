#pragma once

class Circle;
class Square;
class ShapeMaker
{
private:
	Circle* cirlce;
	Square* square;
public:
	ShapeMaker();
	~ShapeMaker();
	void DrawCircle();
	void DrawSquare();
};