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
    int k;
    cin>>k;
	sort(a,a+n);
	int i=0;	
	int min=a[0];
	while(a[i]<0 && k>0)
		{
		a[i]=-a[i];
		min=a[i];
		k--;
		i++;
		}
	if((k&1)==1)
		{
		if(min>=a[i])
			a[i]=-a[i];
		else
			a[i-1]=-a[i-1];
		}
	int sum=0;
	for(int i=0;i<n;++i)
		sum+=a[i];
	cout<<sum<<'\n';
	}
	return 0;
}
