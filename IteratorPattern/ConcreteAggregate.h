#pragma once
#include "Aggregate.h"
#include "ConcreteIterator.h"
#include <vector>
template<typename T>
class ConcreteAggregate : public Aggregate<T>{
private:
	std::vector<T> arrayList;
public:
	Iterator<T>* GetIterator(){
		return new ConcreteIterator<T>(this);
	};
	T Get(int i){
		return arrayList.at(i);
	}
	void Add(T a){
		arrayList.push_back(a);
	}
	int GetCount(){
		return arrayList.size();
	}
};