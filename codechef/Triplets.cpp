#include <bits/stdc++.h>
#include<unordered_set>
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

#define debug(x) cerr<<"debug->"<<#x<<"::"<<x<<endl
#define debug2(x,y) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n"
#define debug3(x,y,z) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n"
#define MOD 1000000007

int main() {
//std::ios::sync_with_stdio(false);
int b[100005];
int t,p,q,r;
sc(t);
unordered_multiset<int> a;
unordered_multiset<int> c;
int num;
while(t--)
	{
	sc3(p,q,r);
	rep(i,p)	{sc(num); a.insert(num);}
	rep(i,q)	sc(b[i]);
	rep(i,r)	{sc(num); c.insert(num);}
	sort(b,b+q);
	/*sort(a,a+p);
	sort(b,b+q);
	sort(c,c+r);*/
	ll sum=0,sum1=0,sum2=0;
	unordered_multiset<int> ::iterator it=a.begin();
	for(int i=q-1;i>=0;--i)
		{
		for(unordered_multiset<int> ::iterator itr1=a.begin();itr1!=a.end();)
			{
			if(b[i]<*itr1)
				{
				it=itr1;
				++itr1;
				a.erase(it);
				continue;
				}
			sum1=(b[i]+*itr1)%MOD;
			++itr1;
			for(unordered_multiset<int> ::iterator itr2=c.begin();itr2!=c.end();)
				{
				if(b[i]<*itr2)
					{
					it=itr2;
					++itr2;
					continue;
					}
				sum2=(b[i]+*itr2)%MOD;
				sum=(sum%MOD+sum1*sum2)%MOD;
				++itr2;
				}
			}
		}
	
	printf("%lld",sum);
	pfnl();
	}
return 0;
}


