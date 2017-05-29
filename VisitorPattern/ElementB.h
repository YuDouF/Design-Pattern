#pragma once
#include "Element.h"
#include <string>
class Visitor;
class ElementB : public Element{
private:
	std::string name;
public:
	ElementB(std::string name);
	std::string GetName();
	void Accept(Visitor* visitor);
};