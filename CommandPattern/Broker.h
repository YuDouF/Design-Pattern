#pragma once
#include <list>
class Order;
class Broker{
private:
	std::list<Order*> orderList;
public:
	void AddOrder(Order* order);
	void RemoveOrder(Order* order);
	void HandleOrders();
	void Display();
};