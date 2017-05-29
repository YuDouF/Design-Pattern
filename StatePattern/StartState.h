#pragma once
#include "State.h"
class StartState : public State{
public:
	void DoAction(State*& state);
};