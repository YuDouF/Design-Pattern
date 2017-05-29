#include "ConcreteSubject.h"
#include "Observer.h"
ConcreteSubject::ConcreteSubject(int state) : state(state){}
int ConcreteSubject::GetState(){
	return state;
}
void ConcreteSubject::SetState(int state){
	this->state = state;
}
void ConcreteSubject::AddObserver(Observer* observer){
	observerList.push_back(observer);
}
void ConcreteSubject::RemoveObserver(Observer* observer){
	observerList.remove(observer);
}
void ConcreteSubject::Notify(){
	for (std::list<Observer*>::iterator it = observerList.begin(); it != observerList.end(); ++it){
		(*it)->Update(state);
	}
}
