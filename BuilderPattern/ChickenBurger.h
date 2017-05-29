#pragma once
#include "Burger.h"
class ChickenBurger : public Burger{
public:
	std::string GetName();
	float GetPrice();
};