#pragma once
#include <string>
class Paper{
public:
	virtual void QuestionA(){};
	virtual void QuestionB(){};
	void Display(){
		QuestionA();
		QuestionB();
	}
};