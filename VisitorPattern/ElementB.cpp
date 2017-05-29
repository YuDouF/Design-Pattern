#include "ElementB.h"
#include "Visitor.h"
ElementB::ElementB(std::string name) : name(name){}
std::string ElementB::GetName(){
	return name;
}
void ElementB::Accept(Visitor* visitor){
	visitor->VisitElementB(this);
}