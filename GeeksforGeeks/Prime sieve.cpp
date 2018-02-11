#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n+1]={0};
	for(int j=2;j*j<=n;j++)
		{
		if(arr[j]!=1)
			{
			for(int k=2*j;k<=n;k+=j)
				{
				arr[k]=1;
				}
			}
		}
	for(int i=2;i<=n;i++)
		{
		if(arr[i]==0)
			cout<<i<<" ";
		}
	return 0;
}
