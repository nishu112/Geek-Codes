#include<iostream>
#include<vector>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
	{
	int n;
	cin>>n;
	int arr[n],flag=1;
	string ans[]={"no","yes"};
	for(int i=0;i<n;++i)
		cin>>arr[i];
	if((n&1)==0)
		flag=0;
	else
		{
		for(int i=1;i<=n;++i)
			if(i<=n/2)
				{
				if(i!=arr[i-1])
					{
					flag=0;
					break;
					}
				}
			else
				{
				if((n-i+1)!=arr[i-1])
					{
					flag=0;
					break;
					}
				}				
		}
	cout<<ans[flag]<<'\n';
	}
return 0;
}
