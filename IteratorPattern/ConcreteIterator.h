#pragma once
#include "Iterator.h"
#include "ConcreteAggregate.h"
#include <iostream>
template<typename T>
class ConcreteIterator : public Iterator<T>{
private:
	Aggregate<T>  *aggregate;
	int index;
public:
	ConcreteIterator(Aggregate<T>* aggregate){
		this->aggregate = aggregate;
		index = 0;
	}
	T GetFirst(){
		if (!aggregate->GetCount()){
			return aggregate->Get(0);
		}
		return NULL;
	}
	bool IsDone(){
		return index >= aggregate->GetCount() ? true : false;
	}
	T GetCurrentItem(){
		return aggregate->Get(index);
	}
	Iterator<T>& operator++(){
		++index;
		return *this;
	}
	Iterator<T>& operator++(int){
		++index;
		return *this;
	}
};