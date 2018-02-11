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
int graph[100005];
int dp[1005][1005];
int arr[1005];


int root(int id)
	{
	while(id!=graph[id])
		id=graph[id];
	return id;
	}
	
bool isconnected(int n,int m)
	{
	return (root(n)==root(m));
	}

void connect(int n,int m)
	{
	int loc=root(n);
	graph[loc]=root(m);
	//debug3(loc,n,a[loc]);
	}

int palind_substr(int n)
	{
	//int n=str.length();
	rep(i,n)	rep(j,n)	dp[i][j]=0;
	rep(i,n)	dp[i][i]=1;
	int l=1;
	while(l<n)
		{
		int i=0;
		while(i<n-l)
			{
			if(graph[arr[i]]==graph[arr[i+l]])	{dp[i][i+l]=2; if(l>1)	dp[i][i+l]+=dp[i+1][i+l-1];}
			else 	dp[i][i+l]=max(dp[i][i+l-1],dp[i+1][i+l]);
			++i;
			}
		++l;
		}
	//rep(i,n)	{rep(j,n) pf(dp[i][j]); cout<<'\n'; }
	return dp[0][n-1];
	}

int main(int argc, char **argv) {
//std::ios::sync_with_stdio(false);
int n,k,m;
sc3(n,k,m);
rep2(i,1,n+1)	graph[i]=i;
int num1,num2;
while(k--)
	{
	cin>>num1>>num2;
	if(!isconnected(num1,num2))
		connect(num1,num2);
	}
rep2(i,1,n+1)	{int temp=i;graph[temp]=root(temp); }
rep(i,m)		sc(arr[i]);
int ans=palind_substr(m);
//rep2(i,1,n+1)	pf(graph[i]);
pf(ans);
return 0;
}


