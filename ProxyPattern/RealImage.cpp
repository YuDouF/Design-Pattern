#include "RealImage.h"
#include <iostream>

RealImage::RealImage(std::string name){
	this->name = name;
	LoadFromDisk();
}
void RealImage::LoadFromDisk(){
	std::cout << "Loading From Disk" << std::endl;
}
void RealImage::Display(){
	std::cout << "Image: " << name << " Show.\n";
}