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


int main(int argc, char **argv) {
int arr[5005];
int dep[5005];
multiset<pair<int,int> > myset;
int t;
sc(t);
while(t--)
	{
	int n;
	sc(n);
	rep(i,n)	sc(arr[i]);
	rep(i,n)	sc(dep[i]);
	myset.clear();
	rep(i,n)	
		{
		/*num1=arr[i]%100;
		num2=dep[i]%100;
		arr[i]=((arr[i]/100 +num1/60)%24)*100 + num1%60;
		dep[i]=((dep[i]/100 +num2/60)%24)*100 + num2%60;*/
		//if(arr[i]>dep[i])	swap(arr[i],dep[i]);
		myset.insert(mp(arr[i],1));
		myset.insert(mp(dep[i],-1));
		}
	int overlap=0,max_overlap=0;
	each(itr,myset)
		{
		debug2(itr->first,itr->second);
		overlap+=itr->second;
		//if(overlap<0)	overlap=0;
		max_overlap=max(max_overlap,abs(overlap));
		}
	pf(max_overlap);
	pfnl();
	}
return 0;
}

