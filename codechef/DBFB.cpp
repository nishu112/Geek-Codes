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
int n,m;
long long int ans[2]={0};
long long int a,b,c,d;
void fast_fib(long long int n)
{
    if(n == 0)
    {
        ans[0] = 0;
        ans[1] = 1;
        return;
    }
    fast_fib((n/2));
    a = ans[0];             
    b = ans[1];             
    c = 2*b - a;
    if(c < 0)
        c += MOD;
    c = (a * c) % MOD;      
    d = (a*a + b*b) % MOD;  
    if(n%2 == 0)
    {
        ans[0] = c;
        ans[1] = d;
    }
    else
    {
        ans[0] = d;
        ans[1] = c+d;
    }
}




int main()
{
int t;
scanf("%d",&t);
ll first,second;
ll A,B;
while(t--)
	{
	scan(m);
	scan(n);
	first=0,second=0;
	for(int i=0;i<m;++i)	{scan(A); first+=A;}
	for(int i=0;i<m;++i)	{scan(B); second+=B;}
	first=((first%MOD)*m)%MOD;
	second=((second%MOD)*m)%MOD;
	if(n>=3)	fast_fib(n-2);
	if(n==1)	cout<<first;
	else if(n==2)	cout<<second;
	else	cout<<(ans[0]*first+second*ans[1])%MOD;
	cout<<'\n';	
	}
return 0;
}
