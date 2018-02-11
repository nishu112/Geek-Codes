#include <bits/stdc++.h>

using namespace std;
#define 	  ll		       long long
#define      pii                  std::pair<int,int>
#define      vi                   std::vector<int>
#define      vll                  std::vector<long long>
#define      mp(a,b)         make_pair(a,b)
#define      pb(a)             push_back(a)
#define      sc(x)	       scanf("%d",&x)
#define	  sc2(x,y)	       scanf("%d%d",&x,&y)
#define	  sc3(x,y,z)      scanf("%d%d%d",&x,&y,&z)
#define      each(it,s)       for(auto it = s.begin(); it != s.end(); ++it)
#define      rep(i, n)         for(int i = 0; i < (n); ++i)
#define      fill(a)             memset(a, 0, sizeof (a))
#define      sortA(v)         sort(v.begin(), v.end())
#define      sortD(v)         sort(v.begin(), v.end(), greater<auto>())
#define      X                   first
#define      Y                   second
#define debug(x) cerr<<"debug->"<<#x<<"::"<<x<<endl
#define debug2(x,y) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n"
#define debug3(x,y,z) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n"
#define MOD 1000000007

int main(int argc, char **argv) {
//std::ios::sync_with_stdio(false);
int t;
sc(t);
while(t--)
	{
	string str;
	cin>>str;
	int i=0;
	int tot=4,curr=1;
	while(str[i])
	    {
	    if(str[i]=='W'){tot+=curr; curr=1; }
	    else{tot-=curr;curr<<=1;}
		debug(tot);
	    debug2(curr,tot);
	    if(tot<0 || tot<curr && str[i+1]!='\0' ) {tot=-1; break;}
	    ++i;
	    }
	cout<<tot<<'\n';
	}
return 0;
}
