#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],key,i;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(int j=1;j<n;j++)
		{
		key=a[j];
		i=j-1;
		while(i>=0 && a[i]<key)
			{
			a[i+1]=a[i];
			i--;
			}
		a[i+1]=key;
		}
	cout<<"\nSorted array:\n";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
