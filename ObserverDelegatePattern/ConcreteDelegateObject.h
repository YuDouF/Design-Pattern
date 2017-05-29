#include "DelegateObject.h"
template<class T>
class ConcreteDelegateObject : public DelegateObject
{
public:
	typedef void(T::*DelegateFunc)(int);
	ConcreteDelegateObject(T * object, DelegateFunc func) : object(object), func(func){}
	void invoke(int state)
	{
		(object->*func)(state);
	}
private:
	T * object;
	DelegateFunc func;
};
