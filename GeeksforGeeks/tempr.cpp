#include <bits/stdc++.h>
using namespace std;
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

int main()
{
int n,k,p;
cin>>n>>k>>p;
vi v(n);
rep(i,n) cin>>v[i];
if(k>=n)
	{
	int m=count(v.begin(),v.end(),1);
	string str;
	cin>>str;
	for(char c:str)	if(c=='!')	cout<<m<<'\n';
	return 0;
	}
multiset<int,greater<int>> myset;
int c=0;
for(int i=0;i<k;++i)
	c+=v[i];
myset.insert(c);
int c1=c;
for(int i=k;i<n;++i)
	{
	c+=v[i];
	c-=v[i-k];
	myset.insert(c);
	}
vector<int> ans(n);
ans[0]=*myset.begin();
for(int i=1;i<n;++i)
	{
	c1+=v[n-i];
	c1-=v[(n-i+k)%n];
	myset.erase(myset.find(c));
	myset.insert(c1);
	ans[i]=*myset.begin();
	c-=v[n-i];
	c+=v[(2*n-i-k)%n];
	}
int r=0;
string str; cin>>str;
	for(char ch:str) {
	if(ch == '?') cout<<ans[r]<<'\n';
	else r = (r + 1) % n;
	}
return 0;
}
