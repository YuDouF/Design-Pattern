#pragma once
#include <iostream>
template<typename T>
class Iterator;
template<typename T>
class Aggregate{
public:
	virtual Iterator<T>* GetIterator(){
		return NULL;
	}
	virtual T Get(int i){
		return NULL;
	}
	virtual void Add(T a){}
	virtual int GetCount(){
		return 0;
	}
};