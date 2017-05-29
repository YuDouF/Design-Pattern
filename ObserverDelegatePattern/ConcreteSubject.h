#pragma once
#include "Subject.h"
#include <list>
class DelegateObject;
class ConcreteSubject : public Subject{
private:
	std::list<DelegateObject*> delegateObjectList;
	int state;
public:
	ConcreteSubject(int state);
	int GetState();
	void SetState(int state);
	ConcreteSubject& operator+=(DelegateObject* delegateObject);
	ConcreteSubject& operator-=(DelegateObject* delegateObject);
	void operator()();
};