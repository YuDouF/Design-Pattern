//#include "VisitorA.h"
//#include "VisitorB.h"
//#include "VisitorObject.h"
//#include "ElementA.h"
//#include "ElementB.h"
//int main(){
//	VisitorObject *object = new VisitorObject();
//	ElementA *elementA = new ElementA("ChenPeng");
//	ElementB *elementB = new ElementB("ChenWei");
//	object->AddElement(elementA);
//	object->AddElement(elementB);
//
//	VisitorA* visitorA = new VisitorA();
//	VisitorB* visitorB = new VisitorB();
//	object->Accept(visitorA);
//	object->Accept(visitorB);
//
//	delete object;
//	delete elementA;
//	delete elementB;
//	delete visitorA;
//	delete visitorB;
//}

//˫����
#include <iostream>
#include <string>

class Problem;
class SpecialProblem;
class Supporter
{
public:
	Supporter(){}
	virtual ~Supporter(){}

	virtual void solve(Problem *p)
	{
		std::cout << "һ��֧�ֽ��һ������" << std::endl;
	}
	virtual void solve(SpecialProblem *sp)
	{
		std::cout << "һ��֧�ֽ����������" << std::endl;
	}
};

class SeniorSupporter :public Supporter
{
public:
	SeniorSupporter(){}
	~SeniorSupporter(){}

	void solve(Problem *p)
	{
		std::cout << "����֧�ֽ��һ������" << std::endl;
	}
	void solve(SpecialProblem *sp)
	{
		std::cout << "����֧�ֽ����������" << std::endl;
	}
};

class Problem
{
public:
	Problem(){}
	virtual ~Problem(){}
	virtual void solve(Supporter *s)
	{
		s->solve(this);
	}
};
class SpecialProblem :public Problem
{
public:
	SpecialProblem(){}
	~SpecialProblem(){}
	void solve(Supporter *s)
	{
		s->solve(this);
	}
};

int main()
{
	Problem *p = new Problem();
	Problem *sp = new SpecialProblem();

	Supporter *s = new SeniorSupporter();

	std::cout << "������:\n";
	s->solve(p);
	s->solve(sp);
	std::cout << "\n˫����:\n";

	p->solve(s);
	sp->solve(s);

	system("Pause");
	return 1;
}