#include "BuyOrder.h"
#include "SellOrder.h"
#include "Broker.h"
#include "Stock.h"
#include "StockPool.h"
int main(){
	StockPool* pool = new StockPool();
	Stock* stock1 = new Stock("中天科技", 1000);
	Stock* stock2 = new Stock("海天科技", 500);
	Stock* stock3 = new Stock("中天科技", 500);
	Stock* stock4 = new Stock("云天科技", 2500);
	Stock* stock5 = new Stock("星天科技", 1500);
	Stock* stock6 = new Stock("云天科技", 1500);
	Order* buy1 = new BuyOrder(pool, stock1);
	Order* sell1 = new SellOrder(pool, stock2);
	Order* sell2 = new SellOrder(pool, stock3);
	Order* buy2 = new BuyOrder(pool, stock4);
	Order* buy3 = new BuyOrder(pool, stock5);
	Order* sell3 = new SellOrder(pool, stock6);

	Broker* broker = new Broker();
	broker->AddOrder(buy1);
	broker->AddOrder(sell1);
	broker->AddOrder(sell2);
	broker->AddOrder(buy2);
	broker->AddOrder(buy3);
	broker->AddOrder(sell3);
	//broker->Display();
	broker->HandleOrders();

	pool->Display();

	delete pool;
	delete stock1;
	delete stock2;
	delete stock3;
	delete broker;
	delete buy1;
	delete sell1;
	delete sell2;
	delete buy2;
	delete buy3;
	delete sell3;
}