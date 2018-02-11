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
cin>>t;
cin.ignore();
while(t--)
	{
	string str;
	getline(cin,str);
	int i=0,l=str.length();
	int final=-1,num;
	bool flag,enter;
	while(i<l)
	    {
	    flag=0;
	    num=0;
	    enter=0;
	    while(str[i]>='0' && str[i]<='9')
	        {
	        enter=1;
	        num=num*10+(str[i]-'0');
	        if(str[i]=='9')	flag=1;
	        ++i;
	        }
	    if(!flag && final<num)
	        {
	        final=num;
	        }
	    if(!enter)	    ++i;
	    debug(num);
	    }
	cout<<final<<'\n';
	}
return 0;
}
