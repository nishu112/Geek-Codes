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
	string st1,st2;
	cin>>st1>>st2;
	int freq1[256]={0},freq2[256]={0};
	bool flag=1;
    int i=0;
    while(st1[i]) {++freq1[st1[i]];++i;}
    i=0;
    while(st2[i]) {++freq2[st2[i]];++i;}
    for(int i=65;i<123;++i)
        {
        debug3(i,freq1[i],freq2[i]);
        if(freq1[i]>freq2[i])
            {
            flag=0;
            break;
            }
        }
    cout<<flag<<'\n';
	}
return 0;
}
