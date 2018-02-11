#include <bits/stdc++.h>
using namespace std;
#define      pii               std::pair<int,int>
#define      vi                std::vector<int>
#define      vll               std::vector<long long>
#define 	 ll				   long long
#define      mp(a,b)           make_pair(a,b)
#define      pb(a)             push_back(a)
#define      each(it,s)        for(auto it = s.begin(); it != s.end(); ++it)
#define      rep(i, n)         for(int i = 0; i < (n); ++i)
#define      fill(a)           memset(a, 0, sizeof (a))
#define      sortA(v)          sort(v.begin(), v.end())
#define      sortD(v)          sort(v.begin(), v.end(), greater<auto>())
#define      X                 first
#define      Y                 second

int main()
{
int n,q;
cin>>n>>q;
multiset<ll> myset;
vll ans((n*(n+1))/2);
vll V(n);
rep(i,n) { cin>>V[i]; myset.insert(V[i]);}
while(V.size()!=1)
	{
	int V_size=V.size();
	for(int i=1;i<V_size;++i)
		{
		int cal=__gcd(V[i-1],V[i]);
		V[i-1]=cal;
		myset.insert(cal);
		}
	V.pop_back();
	}
int i=0;
for(multiset<ll> ::iterator itr=myset.begin();itr!=myset.end();++itr){
	ans[i]=*itr;
	++i;
	cout<<*itr<<" ";
	}
cout<<'\n';
ll x;
//cout<<"hey";
cout<<"size="<<ans.size()<<'\n';
while(q--)
	{
	cin>>x;
	cout<<ans[x-1]<<'\n';
	}
return 0;
}
