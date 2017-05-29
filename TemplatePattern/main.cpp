#include "Student.h"
#include "PaperA.h"
#include "PaperB.h"

int main(){
	Paper* paperA = new PaperA();
	Student* student1 = new Student("³ÂÅô", paperA);
	student1->DoPaper();

	Paper* paperB = new PaperB();
	Student* student2 = new Student("³ÂÅô", paperB);
	student2->DoPaper();
	
}