#pragma once
class Strategy{
public:
	//template<class T>
	virtual int DoOperation(int first, int second) = 0;
};