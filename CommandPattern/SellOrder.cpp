#include "SellOrder.h"
#include "StockPool.h"
SellOrder::SellOrder(StockPool* stockPool, Stock* stock) : Order(stockPool, stock){}
void SellOrder::Execute(){
	stockPool->Sell(stock);
}