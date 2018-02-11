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
#define 	 rep2(i,j,n)	   for(int i = j; i < (n); ++i)
#define      rep(i, n)         for(int i = 0; i < (n); ++i)
#define      fill(a)             memset(a, 0, sizeof (a))
#define      sortA(v)         sort(v.begin(), v.end())
#define      sortD(v)         sort(v.begin(), v.end(), greater<auto>())
#define      X                   first
#define      Y                   second
int dp[105][105];
int get_min(int i,int j)
    {
    return min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
    }
int word_count(string st1,string st2)
    {
    int l1=st1.length(),l2=st2.length();
    rep(i,l1+1) dp[0][i]=i;
    rep(i,l2+1) dp[i][0]=i;
    for(int i=1;i<=l2;++i)
        {
        for(int j=1;j<=l1;++j)
            {
            if(st1[j-1]==st2[i-1])   dp[i][j]=get_min(i,j);
            else    dp[i][j]=1+get_min(i,j);
            }
        }
    rep2(i,1,l2+1)
    	{
    	rep2(j,1,l1+1)	cout<<dp[i][j]<<" ";
    	cout<<'\n';
		}
    return dp[l2][l1];
    }
int main(int argc, char **argv) {
//std::ios::sync_with_stdio(false);
int t;
sc(t);
while(t--)
	{
	int n;
	cin>>n>>n;
    string st1,st2;
	cin>>st1>>st2;
    cout<<word_count(st1,st2)<<'\n';
	}
return 0;
}
