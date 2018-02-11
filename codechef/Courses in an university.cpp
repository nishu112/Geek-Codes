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
	int num;
	int max=0;
	for(int i=0;i<n;++i)
		{
		cin>>num;
		if(max<num)
			max=num;
		}
	cout<<n-max<<'\n';
	}
	return 0;
}
