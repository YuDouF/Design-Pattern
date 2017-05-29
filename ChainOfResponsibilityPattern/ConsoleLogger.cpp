#include "ConsoleLogger.h"
#include <string>

ConsoleLogger::ConsoleLogger(int level){
	this->level = level;
}
void ConsoleLogger::SetSuccesor(Logger* logger){
	succesor = logger;
}
void ConsoleLogger::Write(std::string content){
	std::cout << "INFO Logger: " << content << std::endl;
}