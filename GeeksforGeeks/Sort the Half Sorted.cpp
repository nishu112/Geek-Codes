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
#define     pf(x)               printf("%d ",x);

int main() {
int a[505],b[505],arr[1005];
int t;
sc(t);
while(t--)
	{
	int n;
	cin>>n;
	int f,s;
	s=n/2;
	f=n-s;
	rep(i,f)    sc(a[i]);
	rep(i,s)    sc(b[i]);
	int i=0,j=0,index=0;
	while(i<f && j<s)
	    {
	    if(a[i]<b[j])      arr[index]=a[i++];
	    else      arr[index]=b[j++];
	    ++index;
	    }
	while(i<f)  arr[index++]=a[i++];
	while(j<s)  arr[index++]=b[j++];
	rep(i,n)    pf(arr[i]);
	putchar('\n');
	}
return 0;
}
