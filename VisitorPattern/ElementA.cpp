#include "ElementA.h"
#include "Visitor.h"
ElementA::ElementA(std::string name) : name(name){}
std::string ElementA::GetName(){
	return name;
}
void ElementA::Accept(Visitor* visitor){
	visitor->VisitElementA(this);
}