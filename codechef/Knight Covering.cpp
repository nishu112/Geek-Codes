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

int main() {
//std::ios::sync_with_stdio(false);
int arr[4][60];
for(int i=1;i<=50;++i)
	arr[1][i]=i;
arr[2][1]=2;
for(int i=2;i<=6;++i)
arr[2][i]=4;
for(int i=6;i<=50;i+=6)
	{
	int temp=arr[2][i-1];
	for(int j=1;j<=6;++j)
		arr[2][i+j]=arr[2][i]+arr[2][j];
	}
arr[3][1]=3;
arr[3][2]=4;
arr[3][3]=4;
arr[3][4]=4;
arr[3][5]=4;
arr[3][6]=7;
for(int i=6;i<=50;i+=6)
	{
	int temp=arr[3][i-1];
	for(int j=1;j<=6;++j)
		arr[3][i+j]=arr[3][i]+arr[3][j];
	}
int t;
sc(t);
while(t--)
	{
	int n,m;
	sc2(n,m);
	cout<<arr[n][m];
	pfnl();
	}
return 0;
}


