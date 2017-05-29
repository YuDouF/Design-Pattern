#include "HexaObserver.h"
#include "Subject.h"
#include <iostream>
HexaObserver::HexaObserver(Subject* subject) : subject(subject){}
void HexaObserver::Update(int state){
	std::cout << "Hexa New State: " << state << std::endl;
}