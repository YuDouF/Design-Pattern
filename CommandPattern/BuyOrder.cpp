#include "BuyOrder.h"
#include "StockPool.h"
BuyOrder::BuyOrder(StockPool* stockPool, Stock* stock) : Order(stockPool, stock){}
void BuyOrder::Execute(){
	stockPool->Buy(stock);
}