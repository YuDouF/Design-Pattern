#pragma once
class State;
class Lamp{
private:
	State* state;
public:
	Lamp(State* state);
	void PushLamp();
};