#include "ProxyImage.h"
#include "RealImage.h"
ProxyImage::ProxyImage(std::string name){
	this->name = name;
	realImage = NULL;
}
void ProxyImage::Display(){
	if (realImage == NULL){
		realImage = new RealImage(name);
	}
	realImage->Display();
}