#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
	{
	int n;
	cin>>n;
	int m=2*n;
	int a[m];
	for(int i=0;i<m;++i)
		cin>>a[i];
	sort(a,a+m);
	cout<<a[m-n/2-1]<<'\n';
	//for(int i=m-2;i>=1;i-=2)
		swap(a[0],a[1]);
	for(int i=0;i<m;++i)
		cout<<a[i]<<" ";
	cout<<'\n';
	}
	return 0;
}
