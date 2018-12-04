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

ll A[(int)1e5+5];
ll B[(int)1e5+5];
ll C[(int)1e5+5];
int n1,n2,n3; 
int i=0,j=0,k=0;
ll sum1=0,sum2=0,res=0;
int main()
{
int t;
scanf("%d",&t);
while(t--)
	{
	
	scanf("%d %d %d",&n1,&n2,&n3);
	rep(i,n1)	scanf("%lld",&A[i]);
	rep(i,n2)	scanf("%lld",&B[i]);
	rep(i,n3)	scanf("%lld",&C[i]);
	sort(A,A+n1);
	sort(B,B+n2);
	sort(C,C+n3);
	sum1=0,sum2=0,res=0;
	i=0,j=0,k=0;
	while(j<n2){
		while(i<n1 && A[i]<=B[j]){
			sum1=(sum1+A[i]);
			++i;
		}
		while(k<n3 && C[k]<=B[j]){
			sum2=(sum2+C[k]);
			++k;
		}
		res=(res+(((B[j]*(i))%MOD+sum1%MOD)%MOD)*((sum2%MOD+(B[j]*(k))%MOD)%MOD))%MOD;
		++j;
	}
	printf("%lld\n",res);
	}
return 0;
}


