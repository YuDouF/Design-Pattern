#pragma once
#include "User.h"
class Room;
class ConcreteUser : public User{
private:
	Room* mediator;
public:
	ConcreteUser(std::string name, Room *mediator);
	void SendMessage(User* user, std::string message);
	void ReceiveMessage(User* user, std::string message);
	void Leave();
};