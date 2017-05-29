#include "StockPool.h"
#include "Stock.h"
#include <iostream>
void StockPool::Buy(Stock* s){
	bool t = false;
	for (std::set<Stock*>::iterator it = stockPool.begin(); it != stockPool.end(); ++it){
		if ((*it)->GetName() == s->GetName()){
			(*it)->BuyQuantity(s->GetQuantity());
			t = true;
			break;
		}
	}
	if (!t){
		stockPool.insert(s);
	}
}
void StockPool::Sell(Stock* s){
	bool t = false;
	for (std::set<Stock*>::iterator it = stockPool.begin(); it != stockPool.end(); ++it){
		if ((*it)->GetName() == s->GetName()){
			if (!(*it)->SellQuantity(s->GetQuantity())){
				std::cout << "Stock: "<< s->GetName() << " Empty Now." << std::endl;
				stockPool.erase((*it));
			}
			t = true;
			break;
		}
	}
	if (!t){
		std::cout << "No Stock: " << s->GetName() << std::endl;
	}
}
void StockPool::Display(){
	for (std::set<Stock*>::iterator it = stockPool.begin(); it != stockPool.end(); ++it){
		std::cout << "Stock: " << (*it)->GetName() << "  Quantity: " << (*it)->GetQuantity() << std::endl;
	}
}