#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
long long gcd(long long a,long long b)
	{
	if(a==0)
		return b;
	return gcd(b%a,a);
	}
int main()
{
	int n,q;
	cin>>n>>q;
	map<long long,long long> mymap;
	long long a[n];
	for(int i=0;i<n;++i)
		cin>>a[i];
	long long pregcd;
	for(int i=0;i<n;++i)
		{
		++mymap[a[i]];
		pregcd=a[i];
		for(int j=i+1;j<n;++j)
			{
			if(pregcd==1)
				{
				mymap[1]+=n-j;
				break;
				}
			pregcd=gcd(a[i],pregcd);
			++mymap[pregcd];			
			}
		}	
	//cout<<"container size="<<mymap.size()<<'\n';
	for(map<long long,long long> ::iterator itr=mymap.begin();itr!=mymap.end();++itr)
			{
			while(itr->second)
				{
				--(itr->second);
				cout<<itr->first<<" ";
				}
			}
		cout<<'\n';
	for(int i=1;i<=q;++i)
		{
		int x;
		cin>>x;
		for(map<long long,long long> ::iterator itr=mymap.begin();itr!=mymap.end();++itr)
			{
			x-=itr->second;
			if(x<=0)
				{
				cout<<itr->first<<'\n';
				break;
				}
			}
		}
return 0;
} 
