#pragma once
#include "Logger.h"
class DebugLogger : public Logger{
public:
	DebugLogger(int level);
	void SetSuccesor(Logger* logger);
	void Write(std::string content);
};