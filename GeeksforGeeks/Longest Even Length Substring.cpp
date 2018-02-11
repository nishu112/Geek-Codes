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
#define 	 pfnl			   printf("\n");
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

int main(int argc, char **argv) {
//std::ios::sync_with_stdio(false);
char str[105];
int t;
sc(t);
while(t--)
	{
	int ans=0;
	cin>>str;
	int n=strlen(str);
	if(n==1)	{	pf(ans); pfnl;	continue;  }
	int k=(n&1)?n-1:n;
	int h,s,e;
	bool flag=0;
	while(k)
		{
		h=k/2;
		s=0,e=0;		
		rep(i,k)	(i<h)?s+=str[i]-'0':e+=str[i]-'0';
		if(s==e)	{	flag=1;	break;	}
		for(int i=k;i<n;++i)
			{
			e+=str[i]-'0'   ,  e-=str[i-k/2]-'0';
			s-=str[i-k]-'0' ,  s+=str[i-k/2]-'0';
			if(s==e)	{	flag=1;	break;	}	
			}
		if(flag)	break;
		k-=2;
		}
	if(flag)	ans=k;
	pf(ans);
	pfnl;
	}
return 0;
}

