#include "Iterator.h"
#include "ConcreteAggregate.h"
#include "Person.h"
#include <iostream>
#include <string>

int main(){
	Aggregate<Person*> *aggregate = new ConcreteAggregate<Person*>();
	Person* p1 = new Person("³ÂÅô", 22);
	Person* p2 = new Person("³ÂÎ°", 25);
	Person* p3 = new Person("³ÂXX", 35);
	aggregate->Add(p1);
	aggregate->Add(p2);
	aggregate->Add(p3);
	for (Iterator<Person*>* it = aggregate->GetIterator(); !it->IsDone(); ++(*it)){
		std::cout << *(it->GetCurrentItem()) << std::endl;
	}

	delete aggregate;
	delete p1;
	delete p2;
	delete p3;
}