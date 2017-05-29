#pragma once
#include "Order.h"
class SellOrder : public Order{
public:
	SellOrder(StockPool* stockPool, Stock* stock);
	void Execute();
};