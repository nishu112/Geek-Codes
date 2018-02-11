#include<iostream>
using namespace std;
bool find_sum(int n,int a[],int sum)
	{
	int temp_sum=0;
	for(int i=0;i<n;++i)
		temp_sum+=a[i];
	if(temp_sum<sum)
		return false;
	bool temp[sum+1][n+1]={0};
	for(int i=0;i<=n;++i)
		temp[0][i]=true;
	for(int j=1;j<=sum;++j)
		temp[j][0]=false;
	for(int j=1;j<=sum;++j)
		{
		for(int i=1;i<=n;++i)
			{
			temp[j][i]=temp[j][i-1];
			if(temp[j][i]<=a[i-1])
				temp[j][i]=temp[j][i] || temp[j-a[i-1]][i-1];
			}
		}
	return temp[sum][n];
	}
int main()
{
int t;
cin>>t;
while(t--)
	{
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;++i)
		cin>>a[i];
	if(find_sum(n,a,m))
		cout<<"Yes\n";
	else
		cout<<"No\n";
	}
	return 0;
}
