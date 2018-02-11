#include<iostream>
#include<algorithm>
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
    sort(a,a+n);
    for(int i=0;i<n;i++)
    	cout<<a[i]<<" ";
    cout<<'\n';
    int arr[n]={0};
    int i=0,sum=0,flag;
    while(i<n)
    	{
    	flag=0;
    	while(i!=n && a[i]+1==a[i+1])
    		{
    		flag=1;
    		arr[i]=arr[i+1]=1;
    		i++;
			}
		sum+=flag;
		if(!arr[i])
			sum++;
		++i;
		}
	for(int i=0;i<n;i++)
    	cout<<arr[i]<<" ";
    cout<<'\n';
	cout<<sum<<'\n';
    }

	return 0;
}
