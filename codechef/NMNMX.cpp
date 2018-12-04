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
#define 	gc()				getchar()
 
#define debug(x) cerr<<"debug->"<<#x<<"::"<<x<<endl
#define debug2(x,y) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n"
#define debug3(x,y,z) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n"
#define MOD 1000000007
#define MaxSize 5000 
template <typename T> void scan(T &angka){
	angka=0;char input=gc();T kali=1;
	while(!(48<=input&&input<=57)){	if(input=='-')	kali=-1;input=gc();}
	while(48<=input&&input<=57)	angka=(angka<<3)+(angka<<1)+input-48,input=gc();angka*=kali;
}
 
ll C[MaxSize+1][MaxSize+1];
ll A[MaxSize+1];
int n,k;
ll power(ll x, ll y)
{
	if (y == 0)
		return 1;
	ll p = power(x, y/2) % MOD;
	p = (p * p) % MOD;
 
	return (y%2 == 0)? p : (x * p) % MOD;
}
ll modInverse(ll a, ll m)
{
//debug(m);
return power(a, m-2)%MOD;
	
}
 
 
void pre(){
	C[0][0]=1;
	for(int i=1;i<=MaxSize;++i){
		C[i][0]=1;
		C[i][i]=1;
		for(int j=1;j<i;++j){
			C[i][j]=(C[i-1][j]+C[i-1][j-1])%MOD;
		}
	
	}
	/*for(int i=0;i<=10;++i){
		for(int j=0;j<=i;++j){
			cout<<C[i][j]<<" ";
		}
		cout<<"\n";
	}*/
}
ll comb(int n,int k){
	if(n<k)	return 0;
	return C[n][k];
}
ll getpowervalue(ll x,ll y){
	while(y<0)	y+=MOD;
	return power(x,y);
}
void solve(){
	ll Num=1;//Numerator
	//debug2(n,k);
//cout<<C[n-1][k-1]<<" sf\n";
ll Common=C[n-1][k-1];
for(int i=0; i<n; i++){
            ll x= comb(n-i-1, k-1);
            ll y= comb(i, k-1);                              
            Num=(Num*getpowervalue(A[i+1], Common-x-y))%MOD;
            //Num%=MOD;
        }
		/*
	for(int i=1;i<=n;++i){
		//cout<<A[i]<<" "<<C[n-1][k-1]<<" "<<power(A[i],C[n-1][k-1])<<"\n";
		Num=(Num*power(A[i],C[n-1][k-1]))%MOD;
	}
	ll Den=1;//DEnominator
	for(int i=1;i<=n-k+1;++i){
	//	cout<<A[i]<<" "<<C[n-1][k-1]<<" "<<power(A[i],C[n-i][k-1])<<"\n";
		Den=(Den*power(A[i],C[n-i][k-1]))%MOD;
	}
	for(int i=n;i>=k;--i){
	//	cout<<A[i]<<" "<<C[n-1][k-1]<<" "<<power(A[i],C[i-1][k-1])<<"\n";
		Den=(Den*power(A[i],C[i-1][k-1]))%MOD;
	}
	//debug(Num);
	//debug(Den);
	//debug(modInverse(Den,MOD-2));
	//cout<<Num/Den<<"\n";*/
	cout<<(Num);
}
int main()
{
	pre();
ios_base::sync_with_stdio(false);
cin.tie(NULL);
A[0]=0;
int t;
cin>>t;
while(t--)
	{
	
	cin>>n>>k;
	for(int i=1;i<=n;++i)	cin>>A[i];
	sort(A,A+n+1);
	solve();
	cout<<"\n";
	}
return 0;
}
