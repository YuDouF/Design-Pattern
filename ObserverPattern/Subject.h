#pragma once
class Observer;
class Subject{
public:
	virtual ~Subject(){}
	virtual void AddObserver(Observer* observer){}
	virtual void RemoveObserver(Observer* observer){}
	virtual void Notify(){}
};