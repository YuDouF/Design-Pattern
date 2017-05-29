#include "StartState.h"
#include "StopState.h"
#include <iostream>
void StartState::DoAction(State*& state){
	std::cout << "Start...\n";
	//delete state;
	state = new StopState();
}