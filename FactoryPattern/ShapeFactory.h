#include <string>

class Shape;
class ShapeFactory
{
public:
	ShapeFactory(){}
	~ShapeFactory(){}
	static Shape* GetShape(std::string type);
};