#include <bits/stdc++.h>

using namespace std;
#define 	 ll				   long long
#define      pii               std::pair<int,int>
#define      vi                std::vector<int>
#define      vll               std::vector<long long>
#define      mp(a,b)           make_pair(a,b)
#define      pb(a)             push_back(a)
#define		 sc(x)			   scanf("%d",&x)
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


int ans[105];
int arr[105];
int main(int argc, char **argv) {
//std::ios::sync_with_stdio(false);
int t;
sc(t);
while(t--)
	{
	for(int i=0;i<=100;++i)
		ans[i]=0;
	int n;
	sc(n);
	rep(i,n)	sc(arr[i]);
	int j=0,flag=0;
	rep2(i,1,n)
		{
		while(j<i)
			{
			if(arr[j]>=i-j)	{ ans[i] = ans[j] + 1; break;}
			++j;
			}
		if(!ans[i])	{  flag=-1; break;	}
		}
	if(flag)	{	pf(flag);	}
	else	    pf(ans[n-1]);
	pfnl();
	}
return 0;
}


