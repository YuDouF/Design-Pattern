#include "ChatRoom.h"
#include "User.h"
#include <iostream>
ChatRoom::ChatRoom(std::string name) : Room(name){}
void ChatRoom::ShowMessage(User* sender, User* recever, std::string message){
	std::set<User*>::iterator it = userSet.find(recever);
	if (it != userSet.end()){
		(*it)->ReceiveMessage(sender, message);
	}
	else{
		std::cout << "Recever: " << recever->GetName() << " IS NOT EXSIT.\n";
	}
}
void ChatRoom::AddUser(User* user){
	if (userSet.find(user) == userSet.end()){
		userSet.insert(user);
		std::cout << "User: " << user->GetName() << " Join.\n";
	}
	else{

	}
}
void ChatRoom::RemoveUser(User* user){
	if (userSet.find(user) != userSet.end()){
		userSet.erase(user);
		std::cout << "User: " << user->GetName() << " Leave.\n";
	}
	else{

	}
}
