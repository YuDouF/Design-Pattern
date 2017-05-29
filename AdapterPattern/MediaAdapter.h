#pragma once
#include "MediaPlayer.h"

class AdvancedMediaPlayer;
class MediaAdapter : public MediaPlayer{
private:
	AdvancedMediaPlayer* player;
public:
	MediaAdapter(std::string type);
	~MediaAdapter();
	void Play(std::string type, std::string name);

};