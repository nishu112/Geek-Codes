#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
long long n,num,count=0,m,temp1,temp2,temp=1;
while(t--)
	{
	count=0;
	cin>>n;
	if((n&(n-1))==0)
		{
		cout<<0<<'\n';
		continue;
		}
	num=n;
	while(num)
		{
		++count;
		num=num>>1;
		}
	temp1=n-(temp<<(count-1));
	temp2=(temp<<count)-n;
	m=temp1<temp2? temp1:temp2;
	cout<<((temp1<temp2)? temp1:temp2)<<'\n';
	}
	return 0;
} 
