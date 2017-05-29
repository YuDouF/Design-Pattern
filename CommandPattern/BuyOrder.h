#pragma once
#include "Order.h"
class BuyOrder : public Order{
public:
	BuyOrder(StockPool* stockPool, Stock* stock);
	void Execute();
};