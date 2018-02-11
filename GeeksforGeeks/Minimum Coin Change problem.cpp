#include<iostream>
using namespace std;
int coin(int a[],int n,int m)
	{
	int arr[m+1][n]={0};
	for(int i=0;i<n;++i)
		arr[0][i]=1;
	for(int i=1;i<=m;++i)
		{
		if(i>=a[0])
			arr[i][0]=1;
		else
			arr[i][0]=0;
		}
	for(int i=1;i<=m;i++)
		{
		for(int j=1;j<n;j++)
			{
			arr[i][j]=arr[i][j-1];
			if(i>=a[j])
				arr[i][j]+=arr[i-a[j]][j];
			}
		}
	for(int i=0;i<=m;++i)
		{
		for(int j=0;j<n;++j)
			cout<<" "<<arr[i][j];
		cout<<'\n';
		}
	return arr[m][n-1];
	}
int main()
{
int t;
cin>>t;
while(t--)
    {
    int m;
    cin>>m;
    int a[m];
    for(int i=0;i<m;i++)
    	cin>>a[i];
    int n;
    cin>>n;
    int total_ways=coin(a,m,n);
    cout<<total_ways<<'\n';
    }
	return 0;
}
