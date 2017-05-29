#pragma once
class Observer{
public:
	virtual ~Observer(){}
	virtual void Update(int state){}
};