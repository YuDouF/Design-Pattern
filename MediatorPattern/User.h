#pragma once
#include <string>
class User{
protected:
	std::string name;
public:
	User(std::string name) : name(name){}
	std::string GetName(){
		return name;
	}
	friend bool operator==(const User& user1, User& user2){
		return user1.name == user2.name;
	}
	virtual void SendMessage(User* user, std::string message){}
	virtual void ReceiveMessage(User* user, std::string message){}
	virtual void Leave(){};
};