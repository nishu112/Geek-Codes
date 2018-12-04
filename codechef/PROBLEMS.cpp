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
struct customPair{
	int x;
	int y;
	customPair(){
		
	}
	customPair(int x,int y):x(x),y(y){
		
	}
};
bool comp(customPair &A,customPair &B){
	if(A.x==B.x)	return (A.y<=B.y);
	return (A.x<=B.x);
}
int main()
{
int p,s;
cin>>p>>s;
vector<customPair> V(s);
vector<customPair> res(p);
for(int i=1;i<=p;++i){
	for(int i=0;i<s;++i)	cin>>V[i].x;
	for(int i=0;i<s;++i)	cin>>V[i].y;
	sort(V.begin(),V.end(),comp);
	int pairs=0;
	for(int i=1;i<s;++i){
		if(V[i-1].y>V[i].y)	++pairs;
	}
	res[i-1]=customPair(pairs,i);
}
sort(res.begin(),res.end(),comp);
for(int i=0;i<p;++i){
	cout<<res[i].y<<"\n";
}
return 0;
}


