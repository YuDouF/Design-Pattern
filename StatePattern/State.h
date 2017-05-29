#pragma once
class State{
public:
	virtual void DoAction(State*& state) = 0;
};