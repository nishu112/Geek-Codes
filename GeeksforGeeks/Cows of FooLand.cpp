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
ll dp[1000005];
void magic()
	{
	dp[1]=1,dp[2]=1;
	int n=1000000;
	int i=3;
	while(i<n)
		{
		dp[i]=(dp[i-2]+dp[i-1])%MOD;
		++i;
		}
	}
int arr[6];
ll fib(ll n)
	{
	if(n<=1000000)	return dp[n];
	ll temp1,temp2,half;
	half=(n>>1LL);
	//debug(half);
	temp1=fib(half);
	temp2=fib(half-1)+temp1;
	//debug2(temp1,temp2);
	if((n&1))	return ((temp1*temp1)%MOD +(temp2*temp2)%MOD)%MOD;
	else	return (temp1*((2*temp2-temp1)%MOD))%MOD;
	}

int main() {
//std::ios::sync_with_stdio(false);
magic();
arr[1]=1,arr[2]=1,arr[3]=2,arr[4]=3;
int t;
sc(t);
while(t--)
	{
	ll n;
	scll(n);
	printf("%lld\n",fib(n+1));
	}
return 0;
}


