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

bool left(int h[],int n,int d)
	{
	rep(i,n)
		if(h[0]+i*d!=h[i])
			return 0;
	return 1;
	}
bool right(int h[],int n,int mid)
	{
	for(int i=n;i>mid;--i)
		if(h[i]!=h[n-i])
			return 0;
	return 1;
	}
int main(int argc, char **argv) {
//std::ios::sync_with_stdio(false);
string ans[]={"No","Yes"};
int h[1000005];
int t;
sc(t);
while(t--)
	{
	int n;
	sc(n);
	rep(i,n)	sc(h[i]);
	int d=h[1]-h[0],mid=n/2;
	if(!(n&1) || d>=0 || h[0]+mid*d!=1 || h[mid]!=1)	{cout<<ans[0]<<'\n';  continue;	}
	bool flag=1;
	flag=left(h,mid,d);
	if(flag)	flag=right(h,n-1,mid);
	cout<<ans[flag]<<'\n';
	}
return 0;
}


