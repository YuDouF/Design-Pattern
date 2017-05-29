#include "ConsoleLogger.h"
#include "DebugLogger.h"
#include "ErrorLogger.h"
int main(){
	Logger* console = new ConsoleLogger(Logger::INFO);
	Logger* debug = new DebugLogger(Logger::DEBUG);
	Logger* error = new ErrorLogger(Logger::ERROR);
	error->SetSuccesor(debug);
	debug->SetSuccesor(console);

	error->LogMessage(Logger::DEBUG, "DEBUG DEBUG");
	error->LogMessage(Logger::INFO, "INFO INFO");
	error->LogMessage(Logger::ERROR, "ERROR ERROR");

	delete console;
	delete debug;
	delete error;
}