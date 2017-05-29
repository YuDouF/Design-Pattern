#pragma once
#include "Observer.h"
class Subject;
class OctalObserver : public Observer{
private:
	Subject* subject;
public:
	OctalObserver(Subject* subject);
	void Update(int state);
};