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
class my
{
public:
bool operator()(pair<int,int> a,pair<int,int> b)
	{
	if(a.X==b.X)	return (a.Y>b.Y);
	return (a.X<b.X);
	}
};
int main() {
int t;
sc(t);
while(t--)
	{
	int n,k;
	sc(n);
	priority_queue<pair<int,int>,vector<pair<int,int> >,my> pq;
	int num;
	rep(i,n)	{sc(num);pq.push(mp(num,i));}
	sc(k);
	int count=0,temp=pq.top().X;
	//debug(pq.size());
    cout<<pq.top().Y<<" ";
	pq.pop();
	++count;
	int i=1;
	while(i<n )
		{
		if(temp!=pq.top().X)  ++count;
		if(count==k+1)  break;
		temp=pq.top().X;
		cout<<pq.top().Y<<" ";
		pq.pop();
		++i;
		}
	pfnl();
	}
return 0;
}
