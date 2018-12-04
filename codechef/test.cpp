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
 
ll  ans[400000005 ];
 
int main()
{
int n,q;
cin>>n>>q;
map<ll,int> mymap;
int arr_size=(n*(n+1))/2;
 
vll V(n);
rep(i,n) { cin>>V[i]; ++mymap[V[i]];}
long long cal;
int V_size;
while(V.size()!=1)
	{
	V_size=V.size();
	for(int i=1;i<V_size;++i)
		{
		cal=__gcd(V[i-1],V[i]);
		V[i-1]=cal;
		++mymap[cal];
		}
	V.pop_back();
	}
int i=0;
for(map<ll,int>::iterator itr=mymap.begin();itr!=mymap.end();++itr){
	int number=itr->second;
	while(number)
		{
		ans[i]=itr->first;
		++i;
		--number;
		}
	}

ll x;
while(q--)
	{
	cin>>x;
	cout<<ans[x-1]<<'\n';
	}
return 0;
} 
