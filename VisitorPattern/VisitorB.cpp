#include "VisitorB.h"
#include "Element.h"
#include <iostream>
#include <string>
void VisitorB::VisitElementA(Element* elementA){
	std::cout << elementA->GetName() << " Visit VisitElementA.\n";
}
void VisitorB::VisitElementB(Element* elementB){
	std::cout << elementB->GetName() << " Visit VisitElementB.\n";
}