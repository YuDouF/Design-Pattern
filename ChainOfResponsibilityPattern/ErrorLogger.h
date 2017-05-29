#pragma once
#include "Logger.h"
class ErrorLogger : public Logger{
public:
	ErrorLogger(int level);
	void SetSuccesor(Logger* logger);
	void Write(std::string content);
};