#include "BinaryObserver.h"
#include "ConcreteDelegateObject.h"
#include "Observer.h"
#include "ConcreteSubject.h"
int main(){
	ConcreteSubject* s = new ConcreteSubject(10);
	BinaryObserver* b = new BinaryObserver(s);
	ConcreteDelegateObject<BinaryObserver>* c = new ConcreteDelegateObject<BinaryObserver>(b, &BinaryObserver::Update);
	s->SetState(20);
	s->Notify();
	c->invoke(20);
}