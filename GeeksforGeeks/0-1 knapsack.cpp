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
bool comp(pair<int,int> a,pair<int,int> b)
	{
	return (1.0*a.first/a.second)<(1.0*b.first>b.second);
	}
int main()
{
int t;
scan(t);
vector<pair<int,int> > V;
while(t--)
	{
	V.clear();
	int n,w;
	cin>>n>>w;
	int value,weight;
	for(int i=0;i<n;++i)
		{
		cin>>value>>weight;
		V.push_back(make_pair(value,weight));
		}
	sort(V.begin(),V.end(),comp);
	for(int i=0;i<n;++i)
		{
		cout<<V[i].first<<" "<<V[i].second<<'\n';
		}
	float tot_weight=0,tot_value=0;
	for(int i=0;i<n;++i)
		{
		if(tot_weight+V[i].second<=w)
			{
			tot_value+=V[i].first;
			tot_weight+=V[i].second;
			}
		else
			{
			tot_value+=((1.0*V[i].first)/V[i].second)*(w-tot_weight);
			tot_weight=w;
			}
		}
	cout<<fixed<<setprecision(2);
	cout<<tot_value<<'\n';
	}
return 0;
}
