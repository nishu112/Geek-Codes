#include<iostream>
using namespace std;
void print(int n)
	{
	if(n==0 || n==1)
		{
		cout<<n;
		return ;
		}
	print(n>>1);
	cout<<(n&1);
	}
int main()
{
	int n;
	cin>>n;
	print(n);
	return 0;
}
