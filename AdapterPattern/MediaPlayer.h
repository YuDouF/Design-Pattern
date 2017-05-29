#pragma once
#include <string>

class MediaPlayer{
public:
	virtual void Play(std::string type, std::string name) = 0;
};