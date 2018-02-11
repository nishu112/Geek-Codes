#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    int n;
    cin>>n;
    int a[n]={0};
	for(int i=0;i<n;++i)
		a[i]=1;
	for(int i=2;i<=n;++i)
		for(int j=i;j<=n;j+=i)
			++a[j-1];
	for(int i=0;i<n;++i)
		cout<<(a[i]&1)<<" ";
	cout<<'\n';
    }
	return 0;
}
