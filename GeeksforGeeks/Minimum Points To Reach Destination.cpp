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
int a[0x10][0x10];
int r,c,ans,ans_min;
void magic(int i,int j,int Max,int Min){
	if(i==r && j==c)
		{
		Max+=a[i][j];
		Min=min(Min,Max);
		if(ans_min<=Min )	ans_min=Min;
		return;
		// Reaching at the end and then calculating which path have the lowest minimum
		}
	if(i==r+1 ||j==c+1)	return;
	magic(i,j+1,Max+a[i][j],min(Max+a[i][j],Min));
	magic(i+1,j,Max+a[i][j],min(Max+a[i][j],Min));
}
int main(int argc, char **argv) {
//std::ios::sync_with_stdio(false);
rep(i,0x10)	a[0][i]=-40;
rep(i,0x10)	a[i][0]=-40;
a[0][1]=0,a[1][0]=0;
int t;
sc(t);
while(t--)
	{
	int Max,Min;
	sc2(r,c);
	rep2(i,1,r+1)	 rep2(j,1,c+1)	sc(a[i][j]);
	Min=INT_MAX,Max=0,ans_min=-INT_MAX;
	magic(1,1,Max,Min);
	ans=(ans_min>0)?1:-ans_min+1;
	pf(ans);
	pfnl();
	}
return 0;
}



