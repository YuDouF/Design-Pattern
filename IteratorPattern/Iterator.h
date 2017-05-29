#pragma once
#include <iostream>
template<typename T>
class Iterator{
public:
	virtual Iterator<T>& operator++(){
		return *this;
	}
	virtual Iterator<T>& operator++(int){
		return *this;
	}
	virtual T GetFirst(){
		return NULL;
	}
	virtual bool IsDone(){
		return false;
	}
	virtual T GetCurrentItem(){
		return NULL;
	}
};