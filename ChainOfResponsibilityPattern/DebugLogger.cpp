#include "DebugLogger.h"
#include <string>

DebugLogger::DebugLogger(int level){
	this->level = level;
}
void DebugLogger::SetSuccesor(Logger* logger){
	succesor = logger;
}
void DebugLogger::Write(std::string content){
	std::cout << "DEBUG Logger: " << content << std::endl;
}