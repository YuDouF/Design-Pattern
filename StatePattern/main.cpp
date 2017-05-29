#include "Lamp.h"
#include "StartState.h"
#include "StopState.h"
#include <iostream>

int main(){
	Lamp* lamp = new Lamp(new StopState());
	lamp->PushLamp();
	lamp->PushLamp();


	delete lamp;
	return 0;
}