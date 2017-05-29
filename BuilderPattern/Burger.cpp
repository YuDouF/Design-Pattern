#include "Burger.h"
#include "Wrapper.h"

Packing* Burger::GetPacking(){
	return new Wrapper();
}