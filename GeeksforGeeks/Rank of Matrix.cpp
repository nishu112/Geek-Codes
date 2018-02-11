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
#define eps	0.000001

int main(int argc, char **argv) {
//std::ios::sync_with_stdio(false);
float arr[3][3];
int rank,c,n=3;
bool visit[3];
int t;
sc(t);
while(t--)
	{
	fill(visit,visit+3,0);
	cout<<fixed;
	cout<<setprecision(6);
	rep(i,n)	rep(j,n)	scanf("%f",&arr[i][j]);
	rank=0,c=0;
	rep(k,n)
		{
		int loc=-1;
		rep(i,n)
		if(!visit[i] && fabs(arr[i][c])>eps)	{ loc=i; break;	}
		if(loc==-1)	{	++c;continue;	}
		++rank,visit[loc]=1;
		rep(r,n)
			{
			if(visit[r] || fabs(arr[r][c])<eps)	continue;
			float fact=arr[r][c]/arr[loc][c];
			rep2(temp_c,c,n)	arr[r][temp_c]+=-fact*arr[loc][temp_c];
			}
		++c;
		}
	//rep(i,n)	{	rep(j,n)	printf("%f ",arr[i][j]);	printf("\n");	} // you could print the matrix by removing the comment line
	pf(rank);
	pfnl();
	}
return 0;
}

