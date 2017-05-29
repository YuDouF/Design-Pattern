#include "ConcreteSubject.h"
#include "DelegateObject.h"
ConcreteSubject::ConcreteSubject(int state) : state(state){}
int ConcreteSubject::GetState(){
	return state;
}
void ConcreteSubject::SetState(int state){
	this->state = state;
}
ConcreteSubject& ConcreteSubject::operator += (DelegateObject* delegateObject){
	delegateObjectList.push_back(delegateObject);
	return *this;
}
ConcreteSubject& ConcreteSubject::operator -= (DelegateObject* delegateObject){
	delegateObjectList.remove(delegateObject);
	return *this;
}
void ConcreteSubject::operator()(){
	for (std::list<DelegateObject*>::iterator it = delegateObjectList.begin(); it != delegateObjectList.end(); ++it){
		(*it)->invoke(state);
	}
}
