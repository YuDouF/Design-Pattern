#pragma once
#include <string>
class User;
class Room{
private:
	std::string roomName;
public:
	Room(std::string name) : roomName(name){};
	virtual void ShowMessage(User* sender, User* recever, std::string message){};
	virtual void AddUser(User* user){};
	virtual void RemoveUser(User* user){};
};