#pragma once
#include <string>
class Visitor;
class Element{
public:
	virtual std::string GetName() = 0;
	virtual void Accept(Visitor* visitor) = 0;
};