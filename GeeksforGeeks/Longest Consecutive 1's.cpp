#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    int n;
    cin>>n;
    int count=0,m=0;
    while(n)
    	{
    	if((n&1)==1)
    		{
			++count;
    		m=max(count,m);
    		}
    	else
    		count=0;
    	n=n>>1;
		}
	cout<<m<<'\n';
    }

	return 0;
}
