#include "AudioPlayer.h"
#include "MediaAdapter.h"
#include <iostream>

AudioPlayer::AudioPlayer() : mediaAdapter(NULL){}
AudioPlayer::~AudioPlayer(){
	if (!mediaAdapter){
		delete mediaAdapter;
	}
}
void AudioPlayer::Play(std::string type, std::string name){
	if (type == "Mp3"){
		std::cout << "Mp3: " << name << " is playing.\n";
	}
	else{
		mediaAdapter = new MediaAdapter(type);
		mediaAdapter->Play(type, name);
	}
}