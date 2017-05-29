#include "StopState.h"
#include "StartState.h"
#include <iostream>
void StopState::DoAction(State*& state){
	std::cout << "Stop...\n";
	//delete state;
	state = new StartState();
}