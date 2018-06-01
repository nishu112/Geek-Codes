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

int main(int argc, char **argv) {
//std::ios::sync_with_stdio(false);
int t;
sc(t);
int n,k,count,Ans,temp;
bool visited;
vector<int> Arr;
while(t--)
	{
	Arr.clear();
	visited=false;
	Ans=0;
	count=0;
	cin>>n;
	while(n--){
	    cin>>temp;
	    Arr.push_back(temp);
	}
	cin>>k;
	for(auto itr=Arr.begin();itr!=Arr.end();++itr){
		
	    if(*itr>k){
	        if(visited) Ans+=count;
	        visited=0;
	        count=0;
	    }
	    else{
	        if(*itr==k) visited=1;
	        ++count;
	    }
	    cout<<"count and visited "<<count<<" "<<visited<<'\n';
	}
	if(visited) Ans+=count;
	cout<<Ans<<'\n';
	}
return 0;
}
