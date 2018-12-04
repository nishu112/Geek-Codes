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
bool comparator(pair<int,int> &a,pair<int,int> &b){
	if(a.first!=b.first)	return (a.first<b.first);
	return (a.second<=b.second);

}
int min(ll x, ll y){
	if(x<y)	return (int)x;
	return (int)y;
}
int max(ll x,ll y){
	if(x<y)	return (int)y;
	return (int)x;
}
int main()
{
cin.tie(0);
cout.tie(0);
ll height,weight;
while(1){
cin>>height>>weight;
if(height==-1 || weight==-1)	break;
int robots;
cin>>robots;
ll x,y,radius;
vector<pair<int,int> > container;
int lowerBound,upperBound;
while(robots--){
	cin>>x>>y>>radius;
	lowerBound=min(height,y+radius);
	upperBound=max(1,y-radius);
	container.push_back({lowerBound,-1});
	container.push_back({upperBound, 1});
}
sort(container.begin(),container.end(),comparator);
int Res=0,curr=0;
//cout<<"start\n";
for(auto itr=container.begin();itr!=container.end();++itr){
curr+=itr->second;
Res=max(Res,curr);
//cout<<itr->first<<" "<<itr->second<<"\n";
}
 
cout<<Res<<"\n";
}
return 0;
}


