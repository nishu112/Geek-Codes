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
    int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int temp=0,count=0;
	for(int i=1;i<n;i++)
		{
		if(a[i-1]<a[i])
			temp++;
		else
			{
			count+=(temp*(temp+1))/2;
			temp=0;
			}
		}
	count+=(temp*(temp+1))/2;
	cout<<count<<'\n';
    }

	return 0;
}
