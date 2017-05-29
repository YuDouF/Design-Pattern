#pragma once
#include "State.h"
class StopState : public State{
public:
	void DoAction(State*& state);
};