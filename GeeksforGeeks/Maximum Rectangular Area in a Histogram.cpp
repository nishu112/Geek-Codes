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
    int max=0;
    for(int i=0;i<n;i++)
    	{
    	int width=1;
    	for(int j=i+1;j<n;j++)
    		{
    		if(a[i]<=a[j])
    			width++;
    		else
    			break;
			}
		for(int j=i-1;j>=0;j--)
			{
			if(a[i]<=a[j])
				width++;
			else
				break;
			}
		if(max<width*a[i])
			max=width*a[i];
		}
	cout<<max<<'\n';
    }
	return 0;
}
