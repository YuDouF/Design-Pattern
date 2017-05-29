#include "Order.h"
Order::Order(StockPool* stockPool, Stock* stock){
	this->stockPool = stockPool;
	this->stock = stock;
}