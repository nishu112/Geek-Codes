#include<iostream>
using namespace std;
extern void show(int);
int main()
{
	int a;
	a=6;
	show(a);
}
void show(int n)
{
	if(n==0)
		return;
		show(n-1);
		cout<<" "<<n;
		show(n-1);
}
