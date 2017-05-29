#include "MediaAdapter.h"
#include "Mp4Player.h"
#include "VlcPlayer.h"

MediaAdapter::MediaAdapter(std::string type){
	if (type == "Mp4"){
		player = new Mp4Player();
	}
	else{
		player = new VlcPlayer();
	}
}
MediaAdapter::~MediaAdapter(){
	delete player;
}
void MediaAdapter::Play(std::string type, std::string name){
	player->Play(name);
}