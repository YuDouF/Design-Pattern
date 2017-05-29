#pragma once
#include "AdvancedMediaPlayer.h"
#include <string>

class Mp4Player : public AdvancedMediaPlayer{
public:
	void Play(std::string name);
};