#pragma once
#include <string>
class Paper;
class Student{
private:
	std::string name;
	Paper* paper;
public:
	Student(std::string name, Paper* paper);
	void DoPaper();
};