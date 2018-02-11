#include <bits/stdc++.h>
using namespace std;
#define 	 ll				   long long 
#define      pii               std::pair<int,int>
#define      vi                std::vector<int>
#define      mp(a,b)           make_pair(a,b)
#define      pb(a)             push_back(a)
#define      each(it,s)        for(auto it = s.begin(); it != s.end(); ++it)
#define      rep(i, n)         for(int i = 0; i < (n); ++i)
#define      fill(a)           memset(a, 0, sizeof (a))
#define      sortA(v)          sort(v.begin(), v.end())
#define      sortD(v)          sort(v.begin(), v.end(), greater<auto>())
#define      X                 first
#define      Y                 second
ll incr(vi v,int num)
	{
	ll sum=0;
	for(int i=0;i<=num;++i)
		sum+=abs(i+1-v[i]);		
	return sum;
	}
ll decr(vi v,int num)
	{
	ll sum=0;
	int n=v.size()-1;
	for(int i=n;i>=num;--i,--n)
		{
		sum+=abs(v.size()-i-v[n]);
		}
	return sum;
	}

int main()
{
int t;
cin>>t;
while(t--)
	{
	int n;
	cin>>n;
	vi h(n);
	rep(i,n) cin>>h[i];
	int n1=(n-1)/2;
	cout<<incr(h,n1)+decr(h,n1+1)<<'\n';
	}
return 0;
}
