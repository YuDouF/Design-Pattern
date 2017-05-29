#include "Student.h"
#include "Paper.h"
Student::Student(std::string name, Paper* paper){
	this->name = name;
	this->paper = paper;
}
void Student::DoPaper(){
	paper->Display();
}