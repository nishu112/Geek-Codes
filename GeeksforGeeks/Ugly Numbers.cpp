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
    if(n==1)
    	{
		cout<<1<<'\n';
		continue;
		}
    int count=1;
    int i=2;
    while(count!=n)
    	{
    	int j=i;
    	while(j%2==0)
    		{
			j/=2;
			}
    	while(j%3==0)
    		{
			j/=3;
			}
		while(j%5==0)
    		{
			j/=5;
			}
		if(j==1)
			++count;
		++i;
		}
	cout<<i-1<<'\n';
    }

	return 0;
}
