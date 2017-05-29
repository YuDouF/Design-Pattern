#include "VisitorObject.h"
#include "Element.h"
#include "Visitor.h"
void VisitorObject::AddElement(Element* element){
	elementList.push_back(element);
}
void VisitorObject::RemoveElement(Element* element){
	elementList.remove(element);
}
void VisitorObject::Accept(Visitor* visitor){
	for (std::list<Element*>::iterator it = elementList.begin(); it != elementList.end(); ++it){
		(*it)->Accept(visitor);
	}
}