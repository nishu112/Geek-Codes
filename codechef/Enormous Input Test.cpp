#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int n,k;
cin>>n>>k;
int count=0;
while(n--)
	{
	int num;
	cin>>num;
	if(num%k==0)
		++count;
	}
cout<<count;
	return 0;
}
