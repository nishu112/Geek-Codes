#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    long long n,k;
    cin>>n>>k;
    vector<long long> v;
    int l=sqrt(n);
    for(long long i=1;i<=l;++i)
    	{
    	if(n%i==0)
    		{
    		v.push_back(i);
    		if(i*i!=n)
    		    v.push_back(n/i);
			}
		}
	sort(v.begin(),v.end());
	cout<<v[k-1]<<'\n';
	v.clear();
    }

	return 0;
}
