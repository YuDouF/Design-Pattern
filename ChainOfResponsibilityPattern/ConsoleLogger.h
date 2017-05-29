#pragma once
#include "Logger.h"
class ConsoleLogger : public Logger{
public:
	ConsoleLogger(int level);
	void SetSuccesor(Logger* logger);
	void Write(std::string content);
};