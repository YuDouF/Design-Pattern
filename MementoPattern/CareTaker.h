#pragma once
#include <map>
template<typename T>
class Memento;
template<typename T>
class CareTaker{
private:
	static std::map<std::string, Memento<T>*> mementoMap;
public:
	static void AddMemento(std::string name, Memento<T>* memento);
	static void RemoveMemento(std::string name);
	static Memento<T>* GetMemento(std::string name);
};

template<typename T>
std::map<std::string, Memento<T>*> CareTaker<T>::mementoMap;
template<typename T>
void CareTaker<T>::AddMemento(std::string name, Memento<T>* memento){
	std::map<std::string, Memento<T>*>::iterator it = mementoMap.find(name);
	if (it == mementoMap.end()){
		mementoMap.insert(std::pair<std::string, Memento<T>*>(name, memento));
	}
	else{
		it->second->SetState(memento->GetState());
	}
}
template<typename T>
void CareTaker<T>::RemoveMemento(std::string name){
	mementoMap.erase(name);
}
template<typename T>
Memento<T>* CareTaker<T>::GetMemento(std::string name){
	std::map<std::string, Memento<T>*>::iterator it = mementoMap.find(name);
	if (it == mementoMap.end()){
		return NULL;
	}
	return it->second;
}