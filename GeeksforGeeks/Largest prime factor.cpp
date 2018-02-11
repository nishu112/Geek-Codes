//incomplete 
#include<iostream>
using namespace std;
int checkprime(long long int n)
	{
	if(n==1)
		return 0;
	for(int i=2;i*i<=n;i++)
		{
		if(n%i==0)
			return 0;
		}
	return 1;
	}
int main()
{
int t;
cin>>t;
while(t--)
    {
    long long int n,i,x;
    cin>>n;
    //int a[n+1];
    x=n;
    int last;
	if(checkprime(n))
		{
		last=n;
		}
	else
    for(i=2;i*i<=n;i++)
    	{
    	if((n%i==0) && checkprime(i))
    		{
    		last=i;
    		while(x%i==0)
    			{
    			x/=i;
				}
			}
		}
	if(last<x)
		cout<<x<<'\n';
	else
		cout<<last<<'\n';
	// cout<<last<<"   "<<x<<'\n';
    }

	return 0;
}
