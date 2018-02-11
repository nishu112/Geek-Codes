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
bool prime[1000005];
int arr[1000005];
void pre()
	{
	prime[0]=0,prime[1]=0;
	int n=1000000;
	for(int i=2;i*i<=n;++i)
		{
		for(int j=2*i;j<=n;j+=i)
			prime[j]=0;
		}
	}
int F(int L,int  R,int  X,int Y) 
	{
    int result = 0;
     for( int i=X;i<=Y;++i)  
         if(prime[i]) 
            for(int j=L;j<=R;++j) 
			{
            int num = arr[j];
            int exponent = 0;
            if( num % i == 0 ) {
                exponent = num/i;
            }
            result+=exponent;
        }
     return result;
}

int main() {
//std::ios::sync_with_stdio(false);
fill(prime,prime+1000001,1);
pre();
int n,q;
sc(n);
rep(i,n)	sc(arr[i]);
sc(q);
int l,r,x,y;
while(q--)
	{
	scanf("%d %d %d %d",&l,&r,&x,&y);
	pf(F(l-1,r-1,x,y));
	pfnl();
	}
return 0;
}

