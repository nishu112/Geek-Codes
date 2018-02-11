#include <bits/stdc++.h>

using namespace std;
#define 	 ll				   long long
#define      pii               std::pair<int,int>
#define      vi                std::vector<int>
#define      vll               std::vector<long long>
#define      mp(a,b)           make_pair(a,b)
#define      pb(a)             push_back(a)
#define		 sc(x)			   scanf("%d",&x)
#define		 sc2(x,y)		   scanf("%d%d",&x,&y)
#define		 sc3(x,y,z)		   scanf("%d%d%d",&x,&y,&z)
#define 	 pf(x)			   printf("%d\n",x);
#define      pf2(x,y)		   printf("%d %d\n",x,y);
#define      each(it,s)        for(auto it = s.begin(); it != s.end(); ++it)
#define      rep(i, n)         for(int i = 0; i < (n); ++i)
#define      fill(a)           memset(a, 0, sizeof (a))
#define      sortA(v)          sort(v.begin(), v.end())
#define      sortD(v)          sort(v.begin(), v.end(), greater<auto>())
#define      X                 first
#define      Y                 second
#define debug(x) cerr<<"debug->"<<#x<<"::"<<x<<endl
#define debug2(x,y) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n"
#define debug3(x,y,z) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n"

int main(int argc, char **argv) {
//std::ios::sync_with_stdio(false);
int t;
sc(t);
while(t--)
	{
	int n;
	sc(n);
	string str;
	cin>>str;
	int i=0,l=str.length();
	int diff=0,maxdiff=0,x,y,fx,fy,zero=0;
	while(str[i])
		{
		(str[i]=='1')? --diff:++diff,++zero;
		//debug(diff);
		if(diff==1 && zero==1 && str[i]=='0')  x=i,y=i;
		else if(diff>=1)	y=i;
		else if(diff<0)		diff=0,zero=0;
		//debug2(x,y);
		if(maxdiff<diff)	fx=x,fy=y,maxdiff=diff;
		++i;
		}
	if(maxdiff)	{ pf2(fx+1,fy+1); }
	else	
		pf(-1);
	}
return 0;
}




