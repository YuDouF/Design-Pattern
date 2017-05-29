#pragma once
#include <string>
class Person{
protected:
	std::string name;
	int age;
public:
	Person(std::string name, int age);
	virtual void Display(){};
};