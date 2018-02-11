#include<iostream>
using namespace std;
class A
	{
	public :
		int a;
	void show()
		{
		cout<<"base";
		}
	};
class B:public A
	{
	public:
		
	void show()
		{
		cout<<"base";
		}
	};
int main()
{
	B obj1 ;
	obj1.show();
	return 0;
}
