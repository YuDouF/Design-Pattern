#include "BinaryObserver.h"
#include <iostream>
BinaryObserver::BinaryObserver(Subject* subject) : subject(subject){}
void BinaryObserver::Update(int state){
	std::cout << "Binary New State: " << state << std::endl;
}