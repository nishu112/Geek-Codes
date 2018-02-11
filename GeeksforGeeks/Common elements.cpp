#include <bits/stdc++.h>

using namespace std;
#define 	 ll				   long long
#define      pii               std::pair<int,int>
#define      vi                std::vector<int>
#define      vll               std::vector<long long>
#define      mp(a,b)           make_pair(a,b)
#define      pb(a)             push_back(a)
#define		 sc(x)			   scanf("%d",&x)
#define 	 scll(x)		   scanf("%lld",&x);
#define		 sc2(x,y)		   scanf("%d%d",&x,&y)
#define		 sc3(x,y,z)		   scanf("%d%d%d",&x,&y,&z)
#define	     pf(x)			   printf("%d ",x);
#define	     pf2(x,y)		   printf("%d %d ",x,y);
#define	     pf3(x,y,z)		   printf("%d %d %d ",x,y,z);
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
//std::ios::sync_with_stdio(false);
int a[1005],b[1005],c[1005];
int t;
sc(t);
while(t--)
	{
	int n1,n2,n3;
	sc3(n1,n2,n3);
	rep(i,n1)	sc(a[i]);
	rep(i,n2)	sc(b[i]);
	rep(i,n3)	sc(c[i]);
	vector<int> ans;
	int i=0,j=0,k=0;
	while(i<n1 && j<n2 && k<n3)
		{
		if(a[i]<b[j])	++i;
		else if(a[i]>b[j])	++j;
		else
			{
			bool found=0;
			while(k<n3 && !found && a[i]>=c[k])
				{
				if(a[i]==c[k])	found=1;
				++k;
				}
			if(found)	ans.pb(a[i]);
			++i,++j;
			}
		}
	if(!ans.size())	cout<<-1;
	each(it,ans)	cout<<*it<<" ";
	pfnl();
	}
return 0;
}


