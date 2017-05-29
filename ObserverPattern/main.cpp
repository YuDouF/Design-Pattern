#include "ConcreteSubject.h"
#include "BinaryObserver.h"
#include "OctalObserver.h"
#include "HexaObserver.h"
int main(){
	ConcreteSubject* subject = new ConcreteSubject(0);
	BinaryObserver* binary = new BinaryObserver(subject);
	OctalObserver* octal = new OctalObserver(subject);
	HexaObserver* hexa = new HexaObserver(subject);

	subject->AddObserver(binary);
	subject->AddObserver(octal);
	subject->AddObserver(hexa);

	subject->SetState(10);
	subject->Notify();

	subject->SetState(20);
	subject->RemoveObserver(octal);
	subject->Notify();

	delete subject;
	delete binary;
	delete octal;
	delete hexa;
}