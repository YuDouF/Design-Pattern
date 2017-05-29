#include "VisitorA.h"
#include "Element.h"
#include <iostream>
#include <string>
void VisitorA::VisitElementA(Element* elementA){
	std::cout << elementA->GetName() << " Visit VisitElementA.\n";
}
void VisitorA::VisitElementB(Element* elementB){
	std::cout << elementB->GetName() << " Visit VisitElementB.\n";
}
