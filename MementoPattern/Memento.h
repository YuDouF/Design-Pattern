#pragma once
template<typename T>
class Memento{
private:
	T state;
public:
	Memento<T>(T state) : state(state){}
	T GetState(){
		return state;
	}
	void SetState(T state){
		this->state = state;
	}
};