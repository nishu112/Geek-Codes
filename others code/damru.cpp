#include<bits/stdc++.h>
using namespace std;
#define pc putchar_unlocked
#define gc getchar_unlocked
typedef long long ll;
typedef unsigned long long llu;
#define mp make_pair
#define pb push_back
#define sc(x) scanf("%d",&x)
#define sc2(x,y) scanf("%d%d",&x,&y)
#define sc3(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define scl(x) scanf("%lld",&x)
#define scl2(x,y) scanf("%lld%lld",&x,&y)
#define scl3(x,y,z) scanf("%lld%lld%lld",&x,&y,&z)
#define scstr(x) scanf("%s",x)
#define pd(x) printf("%d",x)
#define pstr(x) printf("%s",x)
#define newl() printf("\n")
#define fl(i,n) for (i=0;i<n;i++)
#define fle(i,n) for (i=1;i<=n;i++)
#define fla(i,a,n) for (i=a;i<n;i++)
#define mem(a,i) memset(a,i,sizeof(a))
#define fi first
#define se second
typedef pair<int,int> pii;
typedef pair<int,pair<int,int> > piii ;
typedef pair<ll,ll> pll;
typedef pair<ll,int> pli;
//#define gcd __gcd
#define wl(n) while (n--)
#define debug(x) cerr<<"debug->"<<#x<<"::"<<x<<endl
#define debug2(x,y) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n"
#define debug3(x,y,z) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n"
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 
#define all(v) v.begin(),v.end()
#define tatt(cont) typeof(cont.begin())
const double eps=0.000000000000001 ;
#define MOD 1000000007
typedef long double LF;
typedef double lF;
#define hihihaha ((double)CLOCKS_PER_SEC)
#define nl putchar('\n')
//-------------
ll A[100010];
ll dp[100010][20];
int b2[100010];
int n,q,lg=0;
int global = 0;
ll gcd(ll a, ll b )
{
	global++;
	if(b==0)
		return a ;
	return gcd(b,a%b);
}

void pre()
{

	int i,j;
	for (i=1;i<=n;i++)
		dp[i][0]=A[i];
	for (j=1;1;j++)
	{
		for (i=1;i<=n;i++)
		{
			if (i+(1<<j)-1<=n)
			{
				dp[i][j]=gcd(dp[i][j-1],dp[i+(1<<(j-1))][j-1]);
			}
			else
				break;
		}
		if (i==1)
			break;
	}
	b2[1]=0;
	for (i=2;i<100010;i++)
		b2[i]=b2[i/2]+1;
}
ll calc(int l,int r)
{
	static int d;
	assert(l<=r);
	d=r-l+1;
	d=b2[d];
	return gcd(dp[l][d],dp[r-(1<<d)+1][d]);
}
map<ll,ll>ma;
ll gs[64*100010],cm[64*100010];
int main()
{	//ios::sync_with_stdio(0), cin.tie(0);
	int i,j;
	sc2(n,q);
	for(i=1;i<=n;i++)
	{
		scl(A[i]);
	}
	//debug("starting pre\n");
	pre();
	//debug("pre done!\n");
	for (i=1;i<=n;i++)
	{
		ll lst=A[i];
		int pichhla=i;
		//debug(i);
		if (lst==1)
			continue;
		int chutad = 0;
		while (1)
		{
			int st=pichhla,en=n+1,mid;
			//debug("entering...\n");
			chutad = 0;
			while (st<en)
			{
				chutad++;
				mid=(st+en)>>1;
				global = 0;
				if (calc(i,mid)<lst)
				{
					en=mid;
				}
				else st=mid+1;
				printf("global %d\n",global);
			}
			//debug("leaving...\n");
			assert(st>pichhla);
			ma[lst]+=st-pichhla;
			if (st>n)
				break;
			lst=calc(i,st);
			//debug3(st,i,lst);
			pichhla=st;
			if (lst==1)
				break;
			// st is the first wrong gcd !
		}
		//cerr<<"binary search" <<chutad<<endl;

	}
	//debug("bin search etc complete!\n");
	int p=0;
	ll sm=0;
	map<ll,ll>::iterator it=ma.begin();
	while (it!=ma.end()){
		gs[p]=it->fi;
		cm[p]=it->se;
		sm+=it->se;
		it++;
		p++;
	}
	for (i=1;i<p;i++)
	{
		cm[i]=cm[i-1]+cm[i];
	}
	ll tot=1LL*n*(n+1)/2;
	ll ones=tot-sm;
	debug("query processing starting ...\n");
	while (q--)
	{
		ll k;
		scl(k);
		if (k<=ones)
		{
			printf("1\n");
			continue;
		}
		k-=ones;
		int ind=lower_bound(cm,cm+p,k)-cm;
		printf("%lld\n",gs[ind]);
	}

	return 0;

}


//01010110 01101100 01100001 01100100 00101110
