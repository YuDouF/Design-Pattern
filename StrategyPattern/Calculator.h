#pragma once
class Strategy;
class Calculator{
private:
	Strategy* strategy;
public:
	Calculator(Strategy* strategy);
	//template<class T>
	int Calculate(int first, int second);
	void SetStrategy(Strategy* strategy);
};
