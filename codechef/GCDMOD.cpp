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

template <typename T> void scan(T &angka){
	angka=0;char input=gc();T kali=1;
	while(!(48<=input&&input<=57)){	if(input=='-')	kali=-1;input=gc();}
	while(48<=input&&input<=57)	angka=(angka<<3)+(angka<<1)+input-48,input=gc();angka*=kali;
}

ll gcd(ll x,ll y){
	if(x==0)	return y;
	return gcd(y%x,x);
}
ll power(ll x, ll y)
{
	if (y == 0)
		return 1;
	ll p = power(x, y/2) % MOD;
	p = (p * p) % MOD;
 
	return (y%2 == 0)? p : (x * p) % MOD;
}
unordered_set<ll> primes;
bool isprime(ll num){
	if(num<=1)	return 0;
	if(primes.find(num)!=primes.end())	return 1;
	for(ll i=2;i*i<=num;++i){
		if(num%i==0)	return 0;
	}
	primes.insert(num);
	return 1;
}

ll solve(ll a,ll b,ll n){
	if(a==b)	return 2*power(b,n);
	if(abs(a-b)==1)	return 1;
	ll x=a-b;
	/*unordered_map<int,int> st;
	st[2]=1;
	
	if(b%2==0){
		st[2]+=n;
	while(b%2==0){
		st[2]++;
		b/=2;
	}
	}
	for(ll i=3;i<=b;i+=2){
		if((b%i==0) && isprime(i)){
			//st.insert(i);
			st[i]=n;
			while(b%i==0){
				b/=i;				
			}
			if(isprime(b)){
				st[b]=n;
				b=1;
			}
		}
	}*/
	ll res=1;
	if(x%2==0)	{res=2;x/=2;}
	while(n){
		ll GCD=gcd(x,b);
		if(GCD==1)	break;
		--n;
		res*=GCD;
		x/=GCD;
		
	}
	/*
	for(auto itr=st.begin();itr!=st.end() && b!=1;++itr){
		//cout<<itr->first<<" "<<itr->second<<"\n";
		if(b%(itr->first)==0){
			while(b%(itr->first)==0 && itr->second!=0){
				b/=itr->first;
				res=(res*itr->first)%MOD;
				itr->second-=1;
			}
		}		
	}*/
	return res%MOD;
	//ll x=power(a,n)	;
	/*
	b%=MOD;
	ll y=2*power(b,n) ;
	ll Abs=abs(a-b);
	
	return gcd(y,Abs);*/
}

int main()
{
	
int t;
cin>>t;
while(t--)
	{
	ll a,b,n;
	cin>>a>>b>>n;	
	cout<<solve(a,b,n)<<"\n";
	}
return 0;
}


