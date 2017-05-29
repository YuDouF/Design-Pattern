#pragma once
#include "MediaPlayer.h"
class MediaAdapter;
class AudioPlayer : public MediaPlayer
{
private:
	MediaAdapter* mediaAdapter;
public:
	AudioPlayer();
	~AudioPlayer();
	void Play(std::string type, std::string name);
};