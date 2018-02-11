#include<bits/stdc++.h>
 
#define     F(i,j,k,l)     for((i)=(j);(i)<(k);(i)+=(l))
#define     f0(i,j)     F(i,0,j,1)
#define     f1(i,j)     F(i,1,(j+1),1)
#define     RF(i,j,k,l)     for((i)=(j);(i)>(k);(i)-=(l))
#define     rf0(i,j)     RF(i,(j-1),-1,1)
#define     rf1(i,j)     RF(i,j,0,1)
#define     pb     push_back
#define     mp     make_pair
#define     ff     first
#define     ss     second
#define     NL     <<"\n"
#define     nline     cout<<"\n"
#define     INF     1000000001
#define     PI     3.1415926535
#define     all(o)     o.begin(), o.end()
#define     lb(a,b)     lower_bound(all(a),(b))
#define     ub(a,b)     upper_bound(all(a),(b))
#define     lbc(a,b,c)     lower_bound(all(a),(b),c)
#define     ubc(a,b,c)     upper_bound(all(a),(b),c)
#define     dist(a,b)     distance(a.begin(),b)
#define     sz(o)     o.size()
#define     len(o)     o.length()
#define     mset(a,b)     memset(a,(b),sizeof(a))
#define     fill(a,b)     fill(all(a),(b))
#define     FAST_IO     ios_base::sync_with_stdio(false),cin.tie(NULL)
#define     elif     else if
#define     tests    int T; cin>>T; while(T--)
#define     arr_inp(i,N,x,arr)     f0(i,N){ cin>>x; arr.pb(x); }
 
using namespace std;
 
typedef     long long     ll;
typedef     vector<int>     vi;
typedef     vector<ll>     vll;
typedef     vector<string>     vs;
typedef     vector<bool>     vbb;
typedef     vi::iterator     viitr;
typedef     vll::iterator     vllitr;
typedef     vs::iterator     vsitr;
typedef     vbb::iterator     vbbitr;
typedef     unordered_map<int,int> hmii;
typedef     hmii::iterator     hmiiitr;
 
int main()
{
	int i,j,k,l,x,y,z;
	//FAST_IO;
	tests
	{
		int N,M;
		cin>>N>>M;
		if(N==1)
		{
			cout<<M;
		}
		else
		{
			int mod=M%6;
			int ans=((M/6)*4)+4;
			if(mod==1)
				ans-=2;
			if(mod==0)
				ans-=4;
			if(M==1)
				ans=N;
			if(N==3&&mod==2&&M>8)
				ans--;
			cout<<ans;
		}
		cout<<"\n";
	}
	return 0;
} 
