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
    int flag=0,max_data=max(a[0],a[1]);
    if(a[0]<a[n-1])
    	{
    	int j=1;
    	while(j<n)
    		{
    		if(a[j]>max_data)
    			max_data=a[j];
    		if(a[j-1]>a[j])
    			{
    			flag=3;
    			//break;
				}
			j++;
			}
		if(flag!=3)
			flag=1;
		}
	else
		{
		int j=1;
    	while(j<n)
    		{
    		if(a[j]>max_data)
    			max_data=a[j];
    		if(a[j-1]<a[j])
    			{
    			flag=4;
    			//break;
				}
			j++;
			}
		if(flag!=4)
			flag=2;
		}
	cout<<max_data<<" "<<flag<<'\n';
    }

	return 0;
}
