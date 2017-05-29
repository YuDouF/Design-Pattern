#include "MealBuilder.h"
#include "Meal.h"
#include "VegBurger.h"
#include "ChickenBurger.h"
#include "Coke.h"
#include "Pepsi.h"

Meal*  MealBuilder::PrepareMeal(std::string burgerType, std::string drinkType){
	Meal* meal = new Meal();
	if (burgerType == "VegBurger"){
		meal->AddItem(new VegBurger());
	}
	else if (burgerType == "ChickenBurger"){
		meal->AddItem(new ChickenBurger());
	}

	if (drinkType == "Coke"){
		meal->AddItem(new Coke());
	}
	else if (drinkType == "Pepsi"){
		meal->AddItem(new Pepsi());
	}

	return meal;
}