#pragma once
#include <set>
class Stock;
class StockPool{
private:
	std::set<Stock*> stockPool;
public:
	void Buy(Stock* s);
	void Sell(Stock* s);
	void Display();
};