#pragma once
#include "CareTaker.h"
#include <string>
template<typename T>
class Memento;
template<typename T>
class Originator{
private:
	std::string name;
	T state;
	Memento<T>* memento;
public:
	Originator(std::string name, T state);
	T GetState();
	void SetState(T state);
	void SaveMemento();
	void ReloadMemento();
};
template<typename T>
Originator<T>::Originator(std::string name, T state) : name(name), state(state), memento(NULL){}
template<typename T>
T Originator<T>::GetState(){
	return state;
}
template<typename T>
void Originator<T>::SetState(T state){
	this->state = state;
}
template<typename T>
void Originator<T>::SaveMemento(){
	if (memento){
		memento->SetState(state);
	}
	else{
		memento = new Memento<T>(state);
	}
	CareTaker<T>::AddMemento(name, memento);
}
template<typename T>
void Originator<T>::ReloadMemento(){
	state = CareTaker<T>::GetMemento(name)->GetState();
}