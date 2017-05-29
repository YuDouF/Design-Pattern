#include "SingleObject.h"
#include <iostream>

int main(int argc, char const *argv[])
{
	SingleObject* s1 =  SingleObject::GetInstance();
	SingleObject* s2 = SingleObject::GetInstance();
	std::cout << s1 << " " << s2;

	return 0;
}