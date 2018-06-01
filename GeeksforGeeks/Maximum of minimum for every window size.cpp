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
int temp,n;
vector< vector<int> > res;
vector<int> row;
while(t--)
	{
	res.clear();
	row.clear();
	cin>>n;
	for(int i=0;i<n;++i)
	    {
	    cin>>temp;
	    row.push_back(temp);
	    }
	res.push_back(row);
	int j=0;
	while(--n){
	    row.clear();
	    for(int i=1;i<n;++i){
	        row.push_back(min(res[j][i],res[j][i-1]));
	    }
	    res.push_back(row);
	    ++j;
	}
	vector<int> help;
	for (auto row = res.begin(); row != res.end(); row++) {
		//cout<<row->begin();
		help=*row;
		cout<<*max_element(help.begin(),help.end())<<" ";
        
    }

	
	cout<<'\n';

	}
return 0;
}
