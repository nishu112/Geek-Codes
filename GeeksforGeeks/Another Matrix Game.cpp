#include <bits/stdc++.h>

using namespace std;
#define 	 ll				   long long
#define      pii               std::pair<int,int>
#define      vi                std::vector<int>
#define      vll               std::vector<long long>
#define      mp(a,b)           make_pair(a,b)
#define      pb(a)             push_back(a)
#define		 sc(x)			   scanf("%d",&x)
#define 	 scll(x)		   scanf("%lld",&x);
#define		 sc2(x,y)		   scanf("%d%d",&x,&y)
#define		 sc3(x,y,z)		   scanf("%d%d%d",&x,&y,&z)
#define	     pf(x)			   printf("%d ",x);
#define	     pf2(x,y)		   printf("%d %d ",x,y);
#define	     pf3(x,y,z)		   printf("%d %d %d ",x,y,z);
#define 	 pfnl()			   printf("\n");
#define      each(it,s)        for(auto it = s.begin(); it != s.end(); ++it)
#define      rep(i, n)         for(int i = 0; i < (n); ++i)
#define 	 rep2(i,j,n)	   for(int i = j; i < (n); ++i)
#define      fill(a)           memset(a, 0, sizeof (a))
#define      sortA(v)          sort(v.begin(), v.end())
#define      sortD(v)          sort(v.begin(), v.end(), greater<auto>())
#define      X                 first
#define      Y                 second

#define debug(x) cerr<<"debug->"<<#x<<"::"<<x<<endl
#define debug2(x,y) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n"
#define debug3(x,y,z) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n"
#define MOD 1000000007

int main(int argc, char **argv) {
//std::ios::sync_with_stdio(false);
map<char,int> s;
int t;
sc(t);
while(t--)
	{
	string str;
	cin>>str;
	string ans="";
	int i=0,l=str.length();
	int n=ceil(sqrt(l));
	bool flag=1;
	while(i<n)
		{
		int j=i;
		s.clear();
		while(j<l)
			{
			++s[str[j]];
			j+=n;
			}
		for(auto it = s.begin(); it != s.end();)
			{
			if(it->Y!=1)
				it=s.erase(it);
			else
				it++;
			}
		//if(!s.empty())   flag=0;
		bool flag=0;
		auto it=s.end();
		while(!s.empty())
			{
			flag^=1;
			if(flag)	{	ans+=(s.begin()->X) ; s.erase(s.begin());	}
			else		{--it;	ans+=(it->X); 	it=s.erase(it); }
			}
		++i;
		}
	(ans=="") ? cout<<0 : cout<<ans ;
	pfnl();
	//cout<<ans<<'\n';
	
	}
return 0;
}
