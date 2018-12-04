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
int A[205];
ll Min(int i,int &n);
ll Max(int i,int &n){
	if(i==n)	return 0;
	ll sum=0;
	int k;
	for(k=i;k<n && A[k]>=0;++k){
		sum+=A[k];
	}
	//<<"Max "<<k<<"\n";
	return sum -((k==n)?0:(-A[k]+min(Min(k+1,n),Max(k+1,n))));
}
ll Min(int i,int &n){
	if(i==n)	return 0;
	int k;
	ll sum=0;
	for(k=i;k<n && A[k]<=0;++k){
		sum+=A[k];
	}
	//cout<<"Min "<<k<<"\n";
	return sum-(k==n)?0:max(Max(k,n),A[k]+Min(k+1,n));
}
int main()
{
int t;
cin>>t;
while(t--)
	{
	int n;
	cin>>n;
	char ch;
	ch='+';
	int num;
	for(int i=0;i<n-1;++i)	{cin>>num;  A[i]=((ch=='-')?-1:1)*num;cin>>ch;}
	cin>>num;
	A[n-1]=((ch=='-')?-1:1)*num;
	//cout<<"\n";
	//for(int i=0;i<n;++i)	cout<<A[i]<<" ";
	cout<<Max(0,n)<<"\n";
	
	}
return 0;
}


