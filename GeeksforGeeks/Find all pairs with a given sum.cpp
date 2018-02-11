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
int t;
cin>>t;
while(t--)
	{
	int n,m,x;
	cin>>n>>m>>x;
	unordered_set<int> myset;
	vi V(n);
	int num;
	rep(i,n) {cin>>V[i];}
	rep(i,m) {cin>>num; myset.insert(num);}
	int flag=0;
	rep(i,n) {
			 if(myset.find(x-V[i])!=myset.end())	
			 	{
				if(flag) 
					cout<<", ";
				else
					flag=1;
			 	cout<<V[i]<<" "<< x-V[i];
			 	}
			 }
	cout<<'\n';
	}
return 0;
}
