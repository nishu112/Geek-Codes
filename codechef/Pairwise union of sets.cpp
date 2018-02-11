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

#define debug(x) cerr<<"debug->"<<#x<<"::"<<x<<endl
#define debug2(x,y) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n"
#define debug3(x,y,z) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n"
#define MOD 1000000007

int main() {
//std::ios::sync_with_stdio(false);
int t,n,k,num;
sc(t);
while(t--)
	{
	sc2(n,k);
	unordered_set<int> myset[n];
	unordered_set<int> req[n];
	bool visit[n];
	fill(visit,0);
	int x=0;
	int ans=0,full=0;
	while(x<n)
		{
		int len;
		sc(len);
		while(len--)
			{
			sc(num);
			myset[x].insert(num);
			}
		if(myset[x].size()==k){	++full; visit[x]=1; ++x;continue;}
		rep2(i,1,k+1)
			if(myset[x].find(i)==myset[x].end())
				req[x].insert(i);
		++x;
		}
	/*rep(i,n)
		{
		cout<<"\nelement of "<<i<<" set\n";
		for(unordered_set<int>::iterator itr=myset[i].begin();itr!=myset[i].end();++itr)
			pf(*itr);
		pfnl();
		cout<<"req of "<<i<<" set\n";
		for(unordered_set<int>::iterator itr=req[i].begin();itr!=req[i].end();++itr)
			pf(*itr);
		pfnl();
		}*/
	bool found;
	rep(i,n-1)
		{
		if(visit[i]) continue;
		rep2(j,1,n)
			{
			found=1;
			if(visit[j] || myset[i].size()+myset[j].size()<k )	continue;
			for(unordered_set<int>::iterator itr=req[j].begin();itr!=req[j].end();++itr)
				{
				if(myset[i].find(*itr)==myset[i].end())
					{
					//debug3(i,j,*itr);
					found=0;
					break;
					}
				}
			/*if(found)
				debug(i);*/
			ans+=found;				
			}
		}
	while(full--)
		{
		--n;
		ans+=n;
		}
	pf(ans);
	pfnl();
	}
return 0;
}


