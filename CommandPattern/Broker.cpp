#include "Broker.h"
#include "Order.h"
#include "Stock.h"
#include <iostream>
void Broker::AddOrder(Order* order){
	orderList.push_back(order);
}
void Broker::RemoveOrder(Order* order){
	orderList.remove(order);
}
void Broker::HandleOrders(){
	for (std::list<Order*>::iterator it = orderList.begin(); it != orderList.end(); ++it){
		(*it)->Execute();
	}
}
void Broker::Display(){
	for (std::list<Order*>::iterator it = orderList.begin(); it != orderList.end(); ++it){
		std::cout << "Stock: " << (*it)->GetStock()->GetQuantity() << std::endl;
	}
}