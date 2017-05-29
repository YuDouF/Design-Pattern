#include "Calculator.h"
#include "Strategy.h"
Calculator::Calculator(Strategy* strategy) : strategy(strategy){}
void Calculator::SetStrategy(Strategy* strategy){
	delete this->strategy;
	this->strategy = strategy;
}
//template<class T>
int Calculator::Calculate(int first, int second){
	return strategy->DoOperation(first, second);
}