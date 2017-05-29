#pragma once
#include "Subject.h"
#include <list>
class ConcreteSubject : public Subject{
private:
	std::list<Observer*> observerList;
	int state;
public:
	ConcreteSubject(int state);
	int GetState();
	void SetState(int state);
	void AddObserver(Observer* observer);
	void RemoveObserver(Observer* observer);
	void Notify();
};