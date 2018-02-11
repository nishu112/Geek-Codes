#include<iostream>
using namespace std;
int find(int a[],int n)
	{
	int diff=(a[n-1]-a[0])/n;
	int big=0,end=n-1,mid=(big+end)/2;
	while(big<=end)
		{
		mid=(big+end)/2;
		if(a[mid]+diff!=a[mid+1])
			return a[mid]+diff;
		if(a[mid-1]+diff!=a[mid])
			return a[mid-1]+diff;

		if(a[0]+mid*diff==a[mid])
			big++;
		else
			end--;
		}
	}
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
    int res=find(a,n);
    cout<<res<<'\n';
    }
	return 0;
}
