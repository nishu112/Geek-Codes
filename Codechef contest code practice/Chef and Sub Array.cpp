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
bool arr[100005];
int dp[100005];
int n,k,p;	
multiset<int,greater<int> > myset;
void magic()
	{
	int count=0;
	rep(i,k)	if(arr[i])	++count;
	int max_count=count;
	myset.insert(count);
	rep2(i,k,n)	
	{
		if(arr[i])	++max_count;
		if(arr[(i-k)%n])	--max_count;
		myset.insert(max_count);
	}
	dp[0]=*myset.begin();
	for(int i=1;i<n;++i)
		{
		myset.erase(myset.find(max_count));	
		if(arr[n-i])	++count,--max_count;
		if(arr[(n-i+k)%n])	--count;
		if(arr[(2*n-i-k)%n])	++max_count;
		myset.insert(count);
		//myset.insert(max_count);
		dp[i]=*myset.begin();
		}
	}
int main() {
	myset.clear();
	sc3(n,k,p);
	rep(i,n)	cin>>arr[i];
	string str;
	cin>>str;
	if(k>=n)
		{
		int tot=count(arr,arr+n,true);
		for(char ch: str)
			if(ch=='?')	printf("%d\n",tot);
		return 0;
		}
	magic();
	int i=0;
	int rotate=0;
	while(str[i])
		{
		if(str[i]=='!')	++rotate;
		else if(str[i]=='?')	printf("%d\n",dp[rotate%n]);
		++i;
		}
return 0;
}
