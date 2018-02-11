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
//min
template <typename T> void scan(T &angka){
	angka=0;char input=gc();T kali=1;
	while(!(48<=input&&input<=57)){	if(input=='-')	kali=-1;input=gc();}
	while(48<=input&&input<=57)	angka=(angka<<3)+(angka<<1)+input-48,input=gc();angka*=kali;
}
int minsal[1005],offsal[1005],maxjob[1005];
char job[1005][1005];
bool visit[1005];
int n,m;
void solve()
	{
	ll tot_sal=0;
	int count=0;
	int comp_visit=0;
	rep(i,m+1)	visit[i]=0;
	for(int i=0;i<n;++i)
		{
		int k;
		int Max=minsal[i];
		bool flag=0;
		for(int j=0;job[i][j];++j)
			{
			if(job[i][j]=='1' && maxjob[j] && offsal[j]>=Max)
				{
				Max=max(Max,offsal[j]);
				k=j;
				flag=1;
				}
			}
		if(flag)
			{
			if(!visit[k])
				{
				visit[k]=1;
				++comp_visit;
				}
			--maxjob[k];
			tot_sal+=offsal[k];
			++count;
			//debug2(i,k);
			}
		}
	printf("%d %lld %d\n",count,tot_sal,m-comp_visit);
	}
int main() {
int t;
sc(t);
while(t--)
	{
	sc2(n,m);
	rep(i,n)	sc(minsal[i]);
	rep(i,m)	scanf("%d%d",&offsal[i],&maxjob[i]);
	rep(i,n)	scanf("%s",job[i]);
	solve();
	}
return 0;
}

