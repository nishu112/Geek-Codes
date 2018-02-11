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
    int a[n],sum=0;
    for(int i=0;i<n;++i)
    	cin>>a[i];
    for(int i=0;i<n;i++)
    	{
    	int right=0,left=0,j=1;
    	while(j<n && a[j-1]>a[j])
    	    ++right,++j;
    	j=n-2;
    	while(j>=0 && a[j]<a[j+1])
    	    ++left,--j;
    	sum+=max(left,right)+1;
    	}
    cout<<sum<<'\n';
    }

	return 0;
}
