#include "Calculator.h"
#include "AddStrategy.h"
#include "SubstractStrategy.h"
#include <iostream>
#include <string>
int main(){
	Calculator* calculator = new Calculator(new AddStrategy());
	std::cout << "Add: " << calculator->Calculate(10, 20) << std::endl;
	calculator->SetStrategy(new SubstractStrategy());
	std::cout << "Substract: " << calculator->Calculate(10, 20) << std::endl;
	calculator->SetStrategy(new SubstractStrategy());
	std::cout << "Substract: " << calculator->Calculate(100, 20) << std::endl;
}