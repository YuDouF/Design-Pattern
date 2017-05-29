#include "ProxyImage.h"

int main(){
	ProxyImage* image = new ProxyImage("hello.jpg");
	image->Display();
	image->Display();
}