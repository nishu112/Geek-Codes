#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    long long n,r;
    cin>>n>>r;
    if(n<r)
    	{
		cout<<0<<'\n';
		continue;
		}
	int a[n+1]={0};
	a[0]=1;
	int rem=1000000007;
	for(int i=1;i<=n;++i)
		{
		int j=i;
		while(j>0)
			{
			a[j]=((a[j]%rem)+(a[j-1]%rem))%rem;
			--j;
			}
		}
	cout<<a[r]<<'\n';
    }
	return 0;
}
