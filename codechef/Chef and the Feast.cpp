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
int num;
ll p_count,ans,neg,pos,n_count;
multiset<int,greater<int> > myset;
int t,n;
sc(t);
while(t--)
	{
	p_count=0,n_count=0,neg=0,pos=0,ans=0;
	myset.clear();
	sc(n);
	for(int i=0;i<n ;++i)
		{
		scanf("%d",&num);
		if(num>=0)	pos+=num,++p_count;
		else	{myset.insert(num);neg+=num,++n_count;	}
		}
	if(!pos)
		{printf("%lld\n",neg); continue;}
	
	for(multiset<int,greater<int> > ::iterator  it = myset.begin(); it!= myset.end(); ++it)
		{
		num=*it;
		if(pos*p_count<=(pos+num)*(p_count+1)-num)
			pos+=num,++p_count,neg-=num;
		else break;
		}
	ans=pos*p_count+neg;
	printf("%lld\n",ans);
	}
return 0;
}

