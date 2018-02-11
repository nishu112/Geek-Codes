#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    int n,num;
    cin>>n;
    int a[n+1]={0};
    for(int i=0;i<n;i++)
    	{
    	cin>>num;
    	a[num]=1;
		}
	for(int i=1;i<=n;i++)
		if(!a[i])
			cout<<i<<" ";
	cout<<'\n';
    }

	return 0;
}
