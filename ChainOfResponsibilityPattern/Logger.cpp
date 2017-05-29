#include "Logger.h"
int Logger::INFO = 0;
int Logger::DEBUG = 1;
int Logger::ERROR = 2;

void Logger::LogMessage(int type, std::string content){
	if (level == type){
		Write(content);
	}
	else if (succesor != NULL){
		succesor->LogMessage(type, content);
	}
}