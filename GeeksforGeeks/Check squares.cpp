#include<iostream>
using namespace std;
bool prime(int n)
	{
	if(n==2)
		return true;
	if(n%2==0)
		return false;
	for(int i=3;i*i<=n;i+=2)
		{
		if(n%i==0)
			return false;
		}
	return true;
	}
int main()
{
int t;
cin>>t;
while(t--)
    {
    int n;
    cin>>n;
    int k=1;
    int flag=0;
    while(4*k+3<=n)
    	{
    	if(n%(4*k+3)==0 && prime(4*k+3))
    		{
    		int freq=0;
    		while(n%(4*k+3)==0)
    			{
    			n/=4*k+3;
    			++freq;
				}
			if(freq&1)
				{
				flag=1;
				break;
				}
			}
		else
			flag=1;
    	++k;
		}
	if(flag)
		cout<<0<<'\n';
	else
		cout<<1<<'\n';
    }
	return 0;
}
