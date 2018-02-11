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
ll dist[3005],n;
bool visit[3005];
vector<vector<ll > > dir(3005,vector<ll>(n,0));
map<pair<ll,ll> ,ll> val;
int find_min(int u)
	{
	int Min=INT_MAX,index=0;
	for(int i=1;i<=n;++i)
		{
		//cout<<"hey";
		if(!visit[i] && Min>dist[i])
			{
			index=i;
			Min=dist[i];
			//dist[u]=val
			}
		//dist[*itr]=min(dist[*itr],dist[u]+val[mp(u,*itr)]);
		}
	//debug2(u,index);
	return index;
	}
void dijkstra(int u)
	{
	rep(i,n+1)	 dist[i]=INT_MAX;
	rep(i,n+1)	visit[i]=false;
	dist[u]=0;
	//visit[source]=1;
	for(int i=1;i<=n;++i)
		{
		u=find_min(u);
		if(!u)	break;
		//cout<<"hey";
		visit[u]=true;
		for(auto itr=dir[u].begin();itr!=dir[u].end();++itr)
			if(!visit[*itr] && dist[u]!=INT_MAX && val[mp(u,*itr)]+dist[u]<dist[*itr])
				dist[*itr]=val[mp(u,*itr)]+dist[u];
		}
	}
int main() 
{
int t;
sc(t);
while(t--)
	{
	int m;
	scll(n);
	sc(m);
	ll a,b,c;
	while(m--)
		{
		scll(a);
		scll(b);
		scll(c);
		dir[a].push_back(b);
		val[mp(a,b)]=c;
		dir[b].push_back(a);
		val[mp(b,a)]=c;
		}
	/*for(int i=1;i<=n;++i)
		{
		cout<<i<<" : ";
		for(int j=0;j<dir[i].size();++j)
			{
			cout<<dir[i][j]<<" ";
			}
		cout<<'\n';
		}*/
	int source;
	sc(source);
	dijkstra(source);
	for(int i=1;i<=n;++i)
		{
		if(dist[i]==INT_MAX) cout<<-1<<" ";
		else if(dist[i]!=0)	 cout<<dist[i]<<" ";
		}
	cout<<'\n';
	}
return 0;
}
