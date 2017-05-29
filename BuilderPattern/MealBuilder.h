#pragma once
#include <string>
class Meal;
class MealBuilder{
public:
	static Meal* PrepareMeal(std::string burgerType, std::string drinkType);
};