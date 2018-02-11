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
#define      rep2(i,j, n)         for(int i = j; i < (n); ++i)
#define      fill(a)             memset(a, 0, sizeof (a))
#define      sortA(v)         sort(v.begin(), v.end())
#define      sortD(v)         sort(v.begin(), v.end(), greater<auto>())
#define      X                   first
#define      Y                   second

int main(int argc, char **argv) {
//std::ios::sync_with_stdio(false);
int arr[10005];
int t;
sc(t);
while(t--)
	{
	int n;
	sc(n);
	rep(i,n)    sc(arr[i]);
	sort(arr,arr+n);
	if(n==1)    {printf("0\n");continue;}
    int sum=0;
    sum+=arr[1]-arr[0];
    sum+=arr[n-1]-arr[n-2];
	rep2(i,1,n-1)    sum+=min(arr[i]-arr[i-1],arr[i+1]-arr[i]);
    printf("%d\n",sum);
	}
return 0;
}
