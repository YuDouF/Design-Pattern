#pragma once
#include "Observer.h"
class Subject;
class BinaryObserver : public Observer{
private:
	Subject *subject;
public:
	BinaryObserver(Subject* subject);
	void Update(int state);
};