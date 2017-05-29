#pragma once
#include <string>
class StockPool;
class Stock;
class Order{
protected:
	StockPool* stockPool;
	Stock* stock;
public:
	Order(StockPool* myStockPool, Stock* stock);
	Stock* GetStock(){
		return stock;
	}
	virtual void Execute(){};
};