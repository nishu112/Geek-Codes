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
#define 	gc()				getchar()

#define debug(x) cerr<<"debug->"<<#x<<"::"<<x<<endl
#define debug2(x,y) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n"
#define debug3(x,y,z) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n"
#define MOD 1000000007

template <typename T> void scan(T &angka){
	angka=0;char input=gc();T kali=1;
	while(!(48<=input&&input<=57)){	if(input=='-')	kali=-1;input=gc();}
	while(48<=input&&input<=57)	angka=(angka<<3)+(angka<<1)+input-48,input=gc();angka*=kali;
}
int wt[105],val[105];
int dp[105][105];
int n,W;
int solve()
	{
	wt[0]=0;
	val[0]=0;
	rep2(i,0,n+1)	rep(j,W+1)	dp[i][j]=0;
	rep2(i,1,n+1)
		{
		rep2(j,1,W+1)
			{
			if(wt[i]<=j)
				dp[i][j]=max(val[i]+dp[i-1][j-wt[i]],dp[i-1][j]);
			else
				dp[i][j]=dp[i-1][j];
			}
		}
	rep(i,n+1)	
		{
		rep(j,W+1)
			cout<<dp[i][j]<<" ";
		cout<<'\n';
		}
	return dp[n][W];
	}
int main() 
{
int t;
sc(t);
while(t--)
	{
	cin>>n>>W;
	rep2(i,1,n+1)	cin>>val[i];
	rep2(i,1,n+1)	cin>>wt[i];
	cout<<solve()<<'\n';
	}
return 0;
}
