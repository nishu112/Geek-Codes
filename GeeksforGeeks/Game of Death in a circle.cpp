#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    int n,k;
    cin>>n>>k;
    int a[n]={0};
    int j=k-1,i,count=0;
    while(count!=n-1)
    	{
    	count++;
    	a[j]=1;
    	i=0;
    	while(i!=k)
    		{
    		j++;
    		j=j%n;
    		if(a[j]==0)
    			i++;
			}
		}
	//cout<<"hey";
	cout<<'\n';
	for(i=0;i<n;i++)
		if(a[i]==0)
			cout<<i+1<<' ';
	cout<<'\n';
    }

	return 0;
}
