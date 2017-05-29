#pragma once
#include "Visitor.h"
class VisitorB : public Visitor{
public:
	void VisitElementA(Element* elementA);
	void VisitElementB(Element* elementb);
};