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
    int m;
    cin>>m;
	int count=0,max_count=0;
	int i=0,j=0;
    for(;count!=m+1 && i!=n;++i)
    	{
		if(a[i]==0)
    		++count;
	    }	
	if(count<=m)
	    {
	    cout<<n<<'\n';
	    continue;
	    }
	if(i==n && a[n-1]!=0)
	    ++i;
    max_count=max(max_count,i-1);
    int flag=1;
    if(i>=n)
    	flag=0;
	while(flag)
    	{
    	count=0;
    	while(j!=n && count!=1)
    		{
    		if(a[j]==0)
    		    ++count;
    		++j;
			}
		count=0;
		while(i!=n && count!=1)
			{
			if(a[i]==0)
				++count;
			++i;
			}
		if(i==n)
			{
			flag=0;
			if(a[n-1]!=0)
			    ++i;
			}
		max_count=max(max_count,i-j-1);
		}
	cout<<max_count<<'\n';
    }

	return 0;
}
