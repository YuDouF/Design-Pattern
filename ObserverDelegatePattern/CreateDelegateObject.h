#pragma once
class CreateDelegateObject{
public:
	template<class T>
	static DelegateObject* NewDelegateObject(T* obj, void(T::*func)(int)){
		return new ConcreteDelegateObject<T>(obj, func);
	}
};