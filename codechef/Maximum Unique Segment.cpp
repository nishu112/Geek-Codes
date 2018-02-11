#include <bits/stdc++.h>

using namespace std;
#define 	 ll				   long long
#define      pii               std::pair<int,int>
#define      vi                std::vector<int>
#define      vll               std::vector<long long>
#define      mp(a,b)           make_pair(a,b)
#define      pb(a)             push_back(a)
#define		 sc(x)			   scanf("%d",&x)
#define 	 scll(x)		   scanf("%lld",&x)
#define		 sc2(x,y)		   scanf("%d%d",&x,&y)
#define		 sc3(x,y,z)		   scanf("%d%d%d",&x,&y,&z)
#define	     pf(x)			   printf("%d ",x)
#define	     pf2(x,y)		   printf("%d %d ",x,y)
#define	     pf3(x,y,z)		   printf("%d %d %d ",x,y,z)
#define 	 pfnl()			   putchar('\n');
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

int c[1000005],Hash[1000005];
ll w[1000005];
int main() {
//std::ios::sync_with_stdio(false);
w[0]=0;
int t;
sc(t);
while(t--)
	{
	//debug(t);
	int n;
	scanf("%d",&n);
	rep2(i,1,n+1)	scanf("%d",&c[i]);
	rep2(i,1,n+1)	scanf("%lld" ,&w[i]);
	rep2(i,2,n+1)	w[i]+=w[i-1];
	fill(Hash);
    int l,r;
	l=1,r=1;
	ll ans=0;
	while(r<=n){
		if(Hash[c[r]]){
			while(c[r]!=c[l])
				{
				Hash[l]=0;
				++l;
				}
			++l;
			}
		else	++Hash[c[r]];
		
	ans=max(ans,w[r]-w[l-1]);
	debug3(l,r,w[r]-w[l-1]);
	++r;
	}
	printf("%lld\n",ans);
	}
return 0;
}


