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
string ans[]={"False","True"};
string base;
string str;
string comp;
//std::ios::sync_with_stdio(false);
int t;
sc(t);
while(t--)
	{
	cin>>str;
	int i=0,l=str.length();
	bool flag=1;
	while(2*i<l)
		{
		flag=1;
		if(l%(i+1)!=0)
			{
			++i;
			flag=0;
			continue;
			}
		base=str.substr(0,i+1);
		int j=i+1;
		while(j<l)
			{
			comp=str.substr(j,i+1); 
			
			if(base!=comp)	{ flag=0;	break;	}
			j+=i+1;
			}
		if(flag)	break;
		++i;
		}
	cout<<ans[flag]<<'\n';
	}
return 0;
}

