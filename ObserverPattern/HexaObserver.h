#pragma once
#include "Observer.h"
class Subject;
class HexaObserver : public Observer{
private:
	Subject* subject;
public:
	HexaObserver(Subject* subject);
	void Update(int state);
};