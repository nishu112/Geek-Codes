#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    int v,n;
    cin>>v>>n;
    int a[n];
    for(int i=0;i<n;i++)
    	cin>>a[i];
    int arr[v+1];
    arr[0]=0;
    for(int i=1;i<=v;++i)
    	arr[i]=INT_MAX;
    for(int i=0;i<n;++i)
    	{
    	for(int j=a[i];i<=v;++i)
    		{
    		int temp=j-a[i];
    		if(arr[temp]!=INT_MAX && arr[j]<arr[temp]+1)
    			arr[j]=1+arr[temp];
			}
		}
	if(arr[v]!=INT_MAX)
		cout<<arr[v]<<'\n';
	else
		cout<<-1<<'\n';
    }

	return 0;
}
