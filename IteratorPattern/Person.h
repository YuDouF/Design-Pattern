#pragma once
#include <string>
#include <iostream>
class Person{
private:
	std::string name;
	int age;
public:
	Person(std::string name, int age);
	friend std::ostream& operator<<(std::ostream& out, const Person& person);
};