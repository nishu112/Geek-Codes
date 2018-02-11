#include<iostream>
using namespace std;
int occurence(int a[],int low,int high,int x)
	{
	if(low>high)
	    return -1;
	int mid=(low+high)/2;
	if(a[mid]==x && (mid==0 || a[mid-1]!=x))
		{
		return mid;
		}
	if(a[mid]>=x)
		return occurence(a,low,mid-1,x);
	if(a[mid]<x)	
		return occurence(a,mid+1,high,x);
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
    int x;
    cin>>x;
    int f_occur=occurence(a,0,n,x);
    if(f_occur==-1)
    	{
    	cout<<-1<<'\n';
    	continue;
		}
    int l_occur=f_occur;
    while(a[l_occur+1]==x && l_occur<n )
    	{
    	++l_occur;
		}
	cout<<f_occur<<" "<<l_occur<<'\n';
    }
	return 0;
}
