#include "ColdDrink.h"
#include "Bottle.h"

Packing* ColdDrink::GetPacking(){
	return new Bottle();
}