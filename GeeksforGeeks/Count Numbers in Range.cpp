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
#define 	 pfnl()			   printf("\n");
#define      each(it,s)        for(auto it = s.begin(); it != s.end(); ++it)
#define      rep(i, n)         for(int i = 0; i < (n); ++i)
#define 	 rep2(i,j,n)	   for(int i = j; i < (n); ++i)
//#define      fill(a)           memset(a, 0, sizeof (a))
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
bool prime[40000];
fill(prime,prime+40000,1);
prime[0]=0,prime[1]=0;
for(int i=2;i*i<=40000;++i)
	{
	for(int j=2*i;j<=40000;j+=i)
		{
		prime[j]=0;
		}
	}
//rep(i,101)	if(prime[i])	cout<<i<<" ";
//pfnl();
int count_prime[40000]={0};
for(int i=1;i<=40000;++i)
	{
	count_prime[i]=count_prime[i-1]+prime[i];
	}
//debug(count_prime[20]);
int t;
sc(t);
while(t--)
	{
	int l,r;
	sc2(l,r);
	if(r<4)	cout<<0<<'\n';
	if(l<4)	l=4;
	l=sqrt(l),r=sqrt(r);
	cout<<count_prime[r]-count_prime[l-1]<<'\n';
	}
return 0;
}

