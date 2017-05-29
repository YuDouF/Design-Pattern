#include "Meal.h"
#include "Packing.h"
#include "Item.h"
#include <iostream>

void Meal::AddItem(Item* item){
	ArrayList.push_back(item);
}
float Meal::GetTotalPrice(){
	float totalPrice = 0;
	for (std::vector<Item*>::iterator it = ArrayList.begin(); it < ArrayList.end(); ++it){
		totalPrice += (*it)->GetPrice();
	}
	return totalPrice;
}
void Meal::ShowItem(){
	for (std::vector<Item*>::iterator it = ArrayList.begin(); it < ArrayList.end(); ++it){
		std::cout << "Name: " << (*it)->GetName() << " Packing: " << (*it)->GetPacking()->GetPacking() << " Price: " << (*it)->GetPrice() << std::endl;
	}
}