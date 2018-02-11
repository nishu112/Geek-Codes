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
priority_queue<int> q;
int t;
sc(t);
while(t--)
	{
	int n,k,num;
	sc2(n,k);
	rep(i,n)    {sc(num);q.push(num);}
	ll product=1;
	rep(i,k)
	    {
	    product*=(ll)q.top();
	    q.pop();
	    }
    printf("%lld\n",product);
	}
return 0;
}
