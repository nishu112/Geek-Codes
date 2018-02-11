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
    cout<<-1<<" ";
    for(int i=1;i<n;i++)
    	{
    	for(int j=i-1;j>=0;j--)
    		{
    		if(a[i]>a[j])
    			{	
				cout<<a[j]<<" ";
				goto last;
				}
			}
		cout<<-1<<" ";
		last:;
		}
	cout<<"\n";
    }

	return 0;
}
