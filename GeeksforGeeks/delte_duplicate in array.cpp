#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int m=n;
	for(int i=0;i<m;i++)
		{
		for(int j=i+1;j<m;j++)
			{
			if(a[i]==a[j])
				{
					
				m--;
				for(int k=j;k<m;k++)
					{
					a[k]=a[k+1];
					}
				
				for(int z=0;z<m;z++)
					{
				cout<<a[z]<<" ";
					}
				cout<<"\n";
				//j--;
				i--;
				}
			}
		}
	cout<<"m="<<m<<"\n";
	cout<<"array:\n";
	for(int z=0;z<m;z++)
					{
				cout<<a[z]<<" ";
					}
	return 0;
}
