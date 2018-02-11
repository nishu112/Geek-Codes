//Not complete
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
    vector<int> a(n);
    int sum1=0,sum2=0;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int res;
	vector<int> b=a;
	int j=2;
	while(j<n)
		{
		int i=0;
		while(i+2<=j)
			{
			b[j]=max(b[j],b[i]+a[j]);
			i++;
			}
		j++;
		}
	for(int i=0;i<n;i++)
		cout<<b[i]<<" ";
	cout<<'\n';
	res=*max_element(b.begin(),b.end());
	cout<<res<<'\n';
	}
	return 0;
}
