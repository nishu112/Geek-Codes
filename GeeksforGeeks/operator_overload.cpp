#include<iostream>
using namespace std;
class A
	{
	
	int a;
	public:
	A()
	{
	}
	A(int x):a(x)
		{
			
		}
	void show()
		{
		cout<<"a="<<a<<'\n';
		}
	A operator++()
		{
		++a;
		return *this;
		}
	A operator++(int)
		{
		const A old(*this);
    	++(*this);
    	cout<<"val="<<this->a<<'\n';
    	return old;
		}
	};
int main()
{

	A obj2(7);
	obj2.show();
	A obj3(0);
	(obj2++).show();
	obj2.show();
	obj2.show();
	return 0;
}
