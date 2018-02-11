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

int arr1[15][15],arr2[15][15];
int min1,min2;
int n,m;
void find_min(int i,int j,int sum1,int sum2)
	{
	if(i==n-1 && j==m-1)
		{
		if(min1>=sum1)
			{
			if(min1==sum1)	
				min2=min(min2,sum2);
			else	min2=sum2;
			min1=sum1;
			}
		return;
		}
	if(i==n || j==m)	return;
	find_min(i,j+1,sum1+arr1[i][j],sum2+arr2[i][j]);
	find_min(i+1,j,sum1+arr1[i][j],sum2+arr2[i][j]);
	}

int main() {
int t;
sc(t);
while(t--)
	{
	sc2(n,m);
	rep(i,15)	rep(j,15)	arr1[i][j]=0,arr2[i][j]=0;
	rep(i,n)	rep(j,m)	sc(arr1[i][j]);
	rep(i,n)	rep(j,m)	sc(arr2[i][j]);
	//rep2(i,1,n+1)	{rep2(j,1,m+1)	pf(arr1[i][j]);	putchar('\n');}
	min1=INT_MAX,min2=INT_MAX;
	find_min(0,0,arr1[n-1][m-1],arr2[n-1][m-1]);
	printf("%d %d\n",min1,min2);
	}
return 0;
}
