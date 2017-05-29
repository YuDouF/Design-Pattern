#include "Originator.h"
#include "Memento.h"
#include <iostream>
//#include "CareTaker.h"
int main(){
	//CareTaker* careTaker = new CareTaker();
	Originator<char>* player1 = new Originator<char>("³ÂÅô", 'M');
	Originator<char>* player2 = new Originator<char>("³ÂÎ°", 'T');
	player1->SaveMemento();
	player1->SetState('T');
	player1->ReloadMemento();

	player2->SaveMemento();
	player2->SetState('A');
	player2->ReloadMemento();
	std::cout << player1->GetState() << std::endl;
	std::cout << player2->GetState() << std::endl;

	delete player1;
	delete player2;
}