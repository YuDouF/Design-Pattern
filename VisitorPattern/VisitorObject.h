#pragma once
#include <list>
class Element;
class Visitor;
class VisitorObject{
private:
	std::list<Element*> elementList;
public:
	void AddElement(Element* element);
	void RemoveElement(Element* element);
	void Accept(Visitor* visitor);
};