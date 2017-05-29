#pragma once
#include "Item.h"
class Packing;

class Burger : public Item{
public:
	virtual std::string GetName() = 0;
	Packing* GetPacking();
	virtual float GetPrice() = 0;
};