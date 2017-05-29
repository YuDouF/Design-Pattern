#include "OctalObserver.h"
#include "Subject.h"
#include <iostream>
OctalObserver::OctalObserver(Subject* subject) : subject(subject){}
void OctalObserver::Update(int state){
	std::cout << "Octal New State: " << state << std::endl;
}