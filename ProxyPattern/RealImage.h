#include "Image.h"
class RealImage : public Image{
public:
	RealImage(std::string name);
	void LoadFromDisk();
	void Display();
};