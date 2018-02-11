#include<iostream>
using namespace std;
bool check_prime(int num)
	{
	if(num==1)
		return 0;
	else if(num==2)
		return 1;
	else if(num%2==0)
		return 0;
	else
		{
		for(int i=3;i*i<=num;i+=2)
			{
			if(num%i==0)
				return false;
			}
		return true;
		}
	}
int main()
{
int a[41]={0};
for(int i=2;i<=40;++i)
	{
	if(check_prime(i))
		a[i]=1;
	}
int t;
cin>>t;
while(t--)
	{
	int l,r;
	cin>>l>>r;
	int count=0;
	for(int i=l;i<=r;++i)
		{
		int num=i,sum=0;
		while(num)
			{
			sum+=num%10;
			num/=10;
			}
		if(a[sum])
			++count;
		}
	cout<<count<<'\n';
	}
	return 0;
}
