#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
	int n,k;
	cin>>n>>k;
	int m=n/2+1;
	int hash[n+1]={0};
	for(int i=2;i*i<=n;i++)		
		{
		for(int j=2*i;j<=n;j+=i)
			{
			hash[j]=1;
			}
		}
	int count=0,ans=-1;
	for(int i=2;i<=n;i++)
		{
		if(hash[i]==0)
			{
			while(n%i==0)
				{
				count++;
				n/=i;
				}
			if(count>=k)
				{
				ans=i;
				break;
				}
			}
		}
	cout<<ans<<"\n";
}
	return 0;
}
