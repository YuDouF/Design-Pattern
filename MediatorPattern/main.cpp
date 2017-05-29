#include "ConcreteUser.h"
#include "ChatRoom.h"
int main(){
	Room *chatRoom = new ChatRoom("Chat");
	User *user1 = new ConcreteUser("³ÂÅô", chatRoom);
	User *user2 = new ConcreteUser("³ÂÎ°", chatRoom);
	User *user3 = new ConcreteUser("³ÂXX", chatRoom);

	user1->SendMessage(user2, "HAHAHAHAHA");
	user3->SendMessage(user1, "BYE BYE");

	user1->Leave();

	delete chatRoom;
	delete user1;
	delete user2;
	delete user3;
}