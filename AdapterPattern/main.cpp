#include "AudioPlayer.h"

int main(int argc, char const *argv[])
{
	AudioPlayer* player1 = new AudioPlayer();
	player1->Play("Mp3", "hahah");

	AudioPlayer* player2 = new AudioPlayer();
	player2->Play("Mp4", "hehehe");

	AudioPlayer* player3 = new AudioPlayer();
	player3->Play("Vlc", "kakaka");

	delete player1;
	delete player2;
	delete player3;
}