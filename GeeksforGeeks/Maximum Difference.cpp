/*You are required to complete this method */
#include<iostream>
using namespace std;
int findMaxDiff(int a[], int n)
{
int max_diff=0;
for(int i=0;i<n;++i)
    {
    int left=a[i],right=a[i],m,j;
    m=a[i];
    j=i+1;
    for(;j<n;++j)
        {
        if(right>a[j])
            right=a[j];
        }
    j=i-1;
    for(;j>=0;--j)
        {
        if(left>a[j])
            left=a[j];
        }
    if(i==0)
        left=0;
    if(j==n-1)
        right=0;
    max_diff=max(max_diff,abs(left-right));
    }
return max_diff;
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
	for(int i=0;i<n;++i)
		cin>>a[i];
	cout<<findMaxDiff(a,n)<<'\n';
	}
}
