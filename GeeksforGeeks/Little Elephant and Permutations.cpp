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
	int inv=0,l_inv=0;
	for(int i=0;i<n-1;i++)
		{
		int j=i+1;
		while(j<n)
			{
			if(a[i]>a[j])
				l_inv++;
			j++;
			}
		if(a[i]>a[i+1])
			inv++;
		}
	if(l_inv==inv)
		cout<<"YES";
	else
		cout<<"NO";
	cout<<'\n';
	}
	return 0;
}
