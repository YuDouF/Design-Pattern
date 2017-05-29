#include "SingleObject.h"
#include <iostream>

SingleObject* SingleObject::instance = NULL;
SingleObject::SingleObject(){}

SingleObject* SingleObject::GetInstance(){
	if (instance == NULL){
		instance = new SingleObject();
		std::cout << "create\n";
	}
	else{
		std::cout << "has\n";
	}
	return instance;
}