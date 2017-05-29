#include "Lamp.h"
#include "State.h"
Lamp::Lamp(State* state){
	this->state = state;
}
void Lamp::PushLamp(){
	state->DoAction(state);
}