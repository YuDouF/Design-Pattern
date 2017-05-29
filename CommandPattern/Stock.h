#pragma once
#include <string>
class Stock{
private:
	std::string name;
	int quantity;
public:
	Stock(std::string name, int quantity);
	std::string GetName(){
		return name;
	}
	int GetQuantity(){
		return quantity;
	}
	void BuyQuantity(int quantity){
		this->quantity += quantity;
	}
	bool SellQuantity(int quantity){
		if (this->quantity < quantity){
			this->quantity -= 0;
			return false;
		}
		else{
			this->quantity -= quantity;
			return true;
		}
	}
};