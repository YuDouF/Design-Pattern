#include "Employee.h"
#include <iostream>
Employee::Employee(std::string name, int age) : Person(name, age){}
void Employee::Display(){
	std::cout << "--Employee name: " << name << " age: " << age << std::endl;
}