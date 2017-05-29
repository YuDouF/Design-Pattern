#pragma once
#include "Room.h"
#include <set>
class User;
class ChatRoom : public Room{
private:
	std::set<User*> userSet;
public:
	ChatRoom(std::string name);
	void ShowMessage(User* sender, User* recever, std::string message);
	void AddUser(User* user);
	void RemoveUser(User* user);
};
