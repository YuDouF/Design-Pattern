#pragma once
#include <vector>
#include <string>
class Item;
class Meal{
private:
	std::vector<Item*> ArrayList;
public:
	void AddItem(Item* item);
	float GetTotalPrice();
	void ShowItem();
};