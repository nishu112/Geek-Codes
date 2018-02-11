#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
	{
	long long n,num;
	cin>>n;
	num=n;
	int count=0;
	while(num)
		{
		count++;
		num=num>>1;
		}
	long long temp1,temp2;
	temp1=(n-1<<(count-1));
	temp2=((1<<count)-n);
	long long m=temp>temp2? temp2:temp1;
	cout<<m<<'\n';
	}
	return 0;
}
