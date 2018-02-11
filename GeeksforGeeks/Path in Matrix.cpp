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

int main(int argc, char **argv) {
int arr[25][25];
int temp[25];
//std::ios::sync_with_stdio(false);
int t;
sc(t);
while(t--)
	{
	int n;
	sc(n);
	rep(i,n)	rep(j,n)	sc(arr[i][j]);
	rep2(i,1,n)
		{
		rep(x,n)
			{
			temp[x]=arr[i][x];
			}
		rep(j,n)
			{
			if(j && arr[i-1][j]+temp[j-1]>arr[i][j-1])	arr[i][j-1]=arr[i-1][j]+temp[j-1];
			if(j+1<n && arr[i-1][j]+temp[j+1]>arr[i][j+1])	arr[i][j+1]=arr[i-1][j]+temp[j+1];
			if(arr[i-1][j]+temp[j]>arr[i][j])  arr[i][j]=arr[i-1][j]+temp[j];
			//debug3(arr[i][j],i,j);
			}
		}
	int ans=-1;
	for(int i=0;i<n;++i)
		ans=max(ans,arr[n-1][i]);
	pf(ans);
	pfnl();
	}
return 0;
}

