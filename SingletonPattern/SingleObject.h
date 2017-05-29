#pragma once
class SingleObject{
public:
	static SingleObject* GetInstance();
private:
	static SingleObject* instance;
	SingleObject();
};