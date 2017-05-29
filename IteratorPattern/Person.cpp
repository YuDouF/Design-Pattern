#include "Person.h"
Person::Person(std::string name, int age) : name(name), age(age){}
std::ostream& operator<<(std::ostream& out, const Person& person){
	out << "Name: " << person.name << " Age: " << person.age;
	return out;
}