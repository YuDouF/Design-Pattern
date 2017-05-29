#include "ErrorLogger.h"
#include <string>

ErrorLogger::ErrorLogger(int level){
	this->level = level;
}
void ErrorLogger::SetSuccesor(Logger* logger){
	succesor = logger;
}
void ErrorLogger::Write(std::string content){
	std::cout << "ERROR Logger: " << content << std::endl;
}