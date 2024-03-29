#if 01
#include<iostream>
using namespace std;
class A
{
public:
	virtual void f()
	{
		cout << "A::f()";
	}
	void f() const
	{
		cout << "A::f() const" << endl;
	}
};

class B : public A

{

public:

	void f()
	{
		cout << "B::f()";
	}
	void f() const
	{
		cout << "B::f() const" << endl;
	}
};

void g(const A* a)
{
	a->f();
}

int main()
{
	A* a = new B();
	a->f();
	g(a);
	delete a;
	return 0;
}
#endif