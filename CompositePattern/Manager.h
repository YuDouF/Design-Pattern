#pragma once
#include "Person.h"
#include <set>
class Manager : public Person{
private:
	std::set<Person*> EmployeeSet;
public:
	Manager(std::string name, int age);
	~Manager();
	void Add(Person* p);
	void Remove(Person* p);
	void Display();
};