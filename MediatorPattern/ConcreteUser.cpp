#include "ConcreteUser.h"
#include "ChatRoom.h"
#include <iostream>
ConcreteUser::ConcreteUser(std::string name, Room *mediator) : User(name), mediator(mediator){
	mediator->AddUser(this);
};
void ConcreteUser::SendMessage(User* user, std::string message){
	mediator->ShowMessage(this, user, message);
}
void ConcreteUser::ReceiveMessage(User* user, std::string message){
	std::cout << "User: " << name << " Receive Message From: "<< user->GetName() << " Say: " << message << std::endl;
}
void ConcreteUser::Leave(){
	mediator->RemoveUser(this);
}