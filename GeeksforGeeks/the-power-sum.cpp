#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int count=0;
void rec(int x,int l,int n,int i,int sum)
	{
	if(sum>=x)
		{
		if(sum==x)
			{
			count++;
			}
		return;
		}
	if(i<=l)
		{
		rec(x,l,n,i+1,sum);
		rec(x,l,n,i+1,sum+pow(i,n));
		}
	}
int main()
{
    int x,n;
    cin>>x>>n;
    count=0;
    rec(x,pow(x,1.0/n),n,1,0);
    cout<<count<<'\n';
	return 0;
}
