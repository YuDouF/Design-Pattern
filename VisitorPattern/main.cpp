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

//双分配
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
		std::cout << "一级支持解决一般问题" << std::endl;
	}
	virtual void solve(SpecialProblem *sp)
	{
		std::cout << "一级支持解决特殊问题" << std::endl;
	}
};

class SeniorSupporter :public Supporter
{
public:
	SeniorSupporter(){}
	~SeniorSupporter(){}

	void solve(Problem *p)
	{
		std::cout << "资深支持解决一般问题" << std::endl;
	}
	void solve(SpecialProblem *sp)
	{
		std::cout << "资深支持解决特殊问题" << std::endl;
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

	std::cout << "单分配:\n";
	s->solve(p);
	s->solve(sp);
	std::cout << "\n双分配:\n";

	p->solve(s);
	sp->solve(s);

	system("Pause");
	return 1;
}