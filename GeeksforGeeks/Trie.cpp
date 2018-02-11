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

struct Trie
    {
    map<char,Trie> m;
    bool end;
    };

int main(int argc, char **argv) {
//std::ios::sync_with_stdio(false);
int t,n;
sc(t);
string str;
Trie root;
while(t--)
	{
	root.m.clear();
	sc(n);
	while(n--)
	    {
	    Trie temp=root;
	    cin>>str;
	    int i=0;
	    while(str[i])
	        {
	        if(temp.m.find(str[i])==temp.m.end())
	        	{
	        	Trie newnode;
	        	newnode.end=false;
	        	temp.m.insert(mp(str[i],newnode));
	        	//cout<<temp. m.begin()->X<<" ";
				}
			temp=temp.m[str[i]];
	        ++i;
	        }
	    temp.end=true;
	    }
	Trie temp=root;
	while(temp. end!=1 )
		{
		cout<<temp. m.size()<<" ";
		temp=temp.m.begin()->Y;
		}
	cin>>str;
	int i=0;
	bool ans=1;
	while(str[i])
		{
		if(root.m.find(str[i]) == root. m.end())
			{
			debug(i);
			ans=0;
			break;
			}
		root=root. m[str[i]];
		++i;
		if(root.end ==1 && str[i]!='\0')
			{
			debug(ans);
			ans=0;
			break;
			}
		}
	//debug(i);
	cout<<ans<<'\n';
	}
return 0;
}

