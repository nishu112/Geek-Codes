#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;++i)
		cin>>a[i];
	for(int i=1;i<n;++i)
		{
		int j=i;
		while(j && a[(j-1)/2]<a[j])
			{
			swap(a[j],a[(j-1)/2]);
			j=j>>1;
			}
		}
	for(int i=0;i<n;++i)
		cout<<a[i]<<" ";
	int k;
	cin>>k;
	while(k--)
		{
		cout<<"largest element is "<<a[0];
		n--;
		a[0]=a[n];
		int i=0,max,loc;
		while(2*i+1<n || 2*i+2<n)
			{
			if(a[])
			}
		}
	return 0;
}
