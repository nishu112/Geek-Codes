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
int arr[1005][1005];
int n,m;
void magic(int i,int j)
	{
	cout<<"ehy";
	if(i-1>=0 && arr[i-1][j]!=-1)
		{
		if(arr[i-1][j]>arr[i][j]+1)
			{
			magic(i-1,j);
			}
		arr[i-1][j]=min(arr[i-1][j],arr[i][j]+1);
		}
	if(j-1>=0 && arr[i][j-1]!=-1)
		{
		if(arr[i][j-1]>arr[i][j]+1)
			magic(i,j-1);
		}
	if(i+1<n && arr[i+1][j]!=-1)
		{
		if(arr[i+1][j]>arr[i][j]+1);
		magic(i+1,j);
		}
	if(j+1<n && arr[i][j+1]!=-1)
		{
		if(arr[i][j+1]>arr[i][j]+1);
			magic(i,j+1);
		}
	}

int main(int argc, char **argv) {
//std::ios::sync_with_stdio(false);
int temp1,temp2;
int t;
sc(t);
while(t--)
	{
	int x1,x2,y1,y2;
	sc2(n,m);
	rep(i,n)	rep(j,m)	arr[i][j]=1005;
	sc2(x1,y1);
	sc2(x2,y2);
	--x1,--y1,--x2,--y2;
	arr[x1][y1]=0;
	arr[x2][y2]=0;
	int p;
	sc(p);
	while(p--)
		{
		sc2(temp1,temp2);
		arr[temp1-1][temp2-1]=-1;
		}
	magic(x1,y1);
	pf(arr[x1][y1]);
	
	pfnl();
	}
return 0;
}


