#pragma once
#include <string>
class Packing;

class Item{
public:
	virtual std::string GetName(){
		return "";
	};
	virtual Packing* GetPacking(){
		return NULL;
	};
	virtual float GetPrice(){
		return 0;
	};
};