#pragma once
class Element;
class Visitor{
public:
	virtual void VisitElementA(Element* elementA) = 0;
	virtual void VisitElementB(Element* elementb) = 0;
};