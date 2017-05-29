#include "Manager.h"
#include <iostream>
Manager::Manager(std::string name, int age) : Person(name, age){}
Manager::~Manager(){
	for (std::set<Person*>::iterator it = EmployeeSet.begin(); it != EmployeeSet.end(); ++it){
		delete (*it);
	}
}
void Manager::Add(Person* p){
	EmployeeSet.insert(p);
}
void Manager::Remove(Person* p){
	EmployeeSet.erase(p);
}
void Manager::Display(){
	std::cout << "-Manager  name: " << name << " age: " << age << std::endl;
	for (std::set<Person*>::iterator it = EmployeeSet.begin(); it != EmployeeSet.end(); ++it){
		(*it)->Display();
	}
}