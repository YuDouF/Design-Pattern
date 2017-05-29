#include "MealBuilder.h"
#include "Meal.h"
#include <iostream>

int main(){
	Meal* meal = MealBuilder::PrepareMeal("VegBurger", "Coke");
	std::cout << "Total price: " << meal->GetTotalPrice() << std::endl;
	meal->ShowItem();
}