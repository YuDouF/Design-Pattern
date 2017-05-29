#pragma once
#include "Strategy.h"
class SubstractStrategy : public Strategy{
public:
	//template<class T>
	int DoOperation(int first, int second){
		return first - second;
	};
};