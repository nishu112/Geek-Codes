#include <bits/stdc++.h>

using namespace std;
#define 	  ll		       long long
#define      pii                  std::pair<int,int>
#define      vi                   std::vector<int>
#define      vll                  std::vector<long long>
#define      mp(a,b)         make_pair(a,b)
#define      pb(a)             push_back(a)
#define      sc(x)	       scanf("%d",&x)
#define	  sc2(x,y)	       scanf("%d%d",&x,&y)
#define	  sc3(x,y,z)      scanf("%d%d%d",&x,&y,&z)
#define      each(it,s)       for(auto it = s.begin(); it != s.end(); ++it)
#define      rep(i, n)         for(int i = 0; i < (n); ++i)
#define      fill(a)             memset(a, 0, sizeof (a))
#define      sortA(v)         sort(v.begin(), v.end())
#define      sortD(v)         sort(v.begin(), v.end(), greater<auto>())
#define      X                   first
#define      Y                   second
#define debug(x) cerr<<"debug->"<<#x<<"::"<<x<<endl
#define debug2(x,y) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n"
#define debug3(x,y,z) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n"

int a[1005];
int main(int argc, char **argv) {
//std::ios::sync_with_stdio(false);
int t;
sc(t);
while(t--)
	{
	int n,x,y;
	cin>>n>>x>>y;
	int countx=0,county=0;
	rep(i,n)    
	    {
	    sc(a[i]);
	    if(a[i]==x) ++countx;
	    if(a[i]==y) ++county;
	    }
	debug2(countx,county);
	int m=min(countx,county);
	
	
	countx=0,county=0;
	int ans=-1,i=0;
	for(int i=140;i<=150;++i)
		{
		cout<<a[i]<<" ";
		debug3(i,countx,county);
		}
	for(i=0;i<n;++i)
	    {
	    if(a[i]==x) ++countx;
	    if(a[i]==y) ++county;
	    
	    if(countx>m || county>m)   {
	    	
	    	break;
			} 
	    }
	 if(countx>=m && county>=m) ans=i-1;
	 
	printf("%d\n",ans);
	}
return 0;
}
