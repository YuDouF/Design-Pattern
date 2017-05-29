#include "Manager.h"
#include "Employee.h"

int main(){
	Manager* root = new Manager("chenpengaaa", 35);
	Manager* manager = new Manager("chenpeng", 22);
	Manager* manager2 = new Manager("hhh", 22);
	root->Add(manager);
	//Employee* employee = ;
	manager->Add(new Employee("chenwei", 25));
	manager->Add(new Employee("chenwsssei", 15));
	root->Add(manager2);
	manager2->Add(new Employee("chei", 22));
	manager2->Add(new Employee("chenw", 27));
	root->Display();

	//delete root;
	//delete manager;
	//delete manager2;
	//delete employee;
}