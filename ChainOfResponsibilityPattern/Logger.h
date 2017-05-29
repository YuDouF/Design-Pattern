#pragma once
#include <iostream>
class Logger{
protected:
	int level;
	Logger* succesor;
public:
	static int INFO;
	static int DEBUG;
	static int ERROR;

	virtual void SetSuccesor(Logger* logger){};
	void LogMessage(int type, std::string content);
	virtual void Write(std::string content){};
};