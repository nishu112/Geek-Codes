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
    int a[n],b[n];
    int sum_odd_a=0,sum_even_a=0,sum_odd_b=0,sum_even_b=0;
    for(int i=0;i<n;++i)
    	{
		cin>>a[i];
		if((i&1)==0)
			sum_odd_a+=a[i];
		else
			sum_even_a+=a[i];
		}
    for(int i=0;i<n;++i)
    	{
    	cin>>b[i];
    		if((i&1)==0)
			sum_odd_b+=b[i];
		else
			sum_even_b+=b[i];
		}
	cout<<min(sum_odd_a+sum_even_b,sum_odd_b+sum_even_a)<<'\n';
    }

	return 0;
}
