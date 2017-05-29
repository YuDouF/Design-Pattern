#pragma once
#include "AdvancedMediaPlayer.h"
#include <string>

class VlcPlayer : public AdvancedMediaPlayer{
public:
	void Play(std::string name);
};