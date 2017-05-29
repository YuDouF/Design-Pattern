#include <string>

class Shape;
class ShapeFactory
{
public:
	ShapeFactory(){}
	~ShapeFactory(){}
	Shape* GetShape(std::string type);
};