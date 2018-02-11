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
    int curr_sum=0,m=0,loc1,loc2,x,y;
    int flag=1;
    for(int i=0;i<n;++i)
    	{
    	if(a[i]<0)
    	    {
    	    curr_sum=0,flag=1;
    	    continue;
    	    }
    	curr_sum+=a[i];
    	if(flag==1)
    		{
    		loc1=i,loc2=i;
    		flag=0;
			}
		else
    		++loc2;
    	if(m<=curr_sum)
    		{
    		if(m==0|| y-x<loc2-loc1 || m<curr_sum)
    			x=loc1,y=loc2;
			m=curr_sum;
			}
		}
	if(m)
		for(int i=x;i<=y;++i)
			cout<<a[i]<<" ";
	else
		cout<<0;
	cout<<'\n';
    }
	return 0;
}
