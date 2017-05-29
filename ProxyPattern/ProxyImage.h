#pragma once
#include "Image.h"
class RealImage;
class ProxyImage : public Image{
private:
	RealImage* realImage;
public:
	ProxyImage(std::string name);
	void Display();
};