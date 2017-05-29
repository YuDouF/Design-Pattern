#pragma once
#include "Element.h"
#include <string>
class Visitor;
class ElementA : public Element{
private:
	std::string name;
public:
	ElementA(std::string name);
	std::string GetName();
	void Accept(Visitor* visitor);
};