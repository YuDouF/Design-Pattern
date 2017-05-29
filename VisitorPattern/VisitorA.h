#pragma once
#include "Visitor.h"
class VisitorA : public Visitor{
public:
	void VisitElementA(Element* elementA);
	void VisitElementB(Element* elementb);
};