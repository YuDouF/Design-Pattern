#pragma once
#include <string>
class Image{
protected:
	std::string name;
public:
	virtual void Display() = 0;
};