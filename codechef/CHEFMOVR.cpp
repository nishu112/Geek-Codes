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
	#define 	gc()				getchar_unlocked()
	 
	#define debug(x) cerr<<"debug->"<<#x<<"::"<<x<<endl
	#define debug2(x,y) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n"
	#define debug3(x,y,z) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n"
	#define MOD 1000000007
	
	template <typename T> void scan(T &angka){
		angka=0;register int input=gc();T kali=1;
		while(!(48<=input&&input<=57)){	if(input=='-')	kali=-1;input=gc();}
		while(48<=input&&input<=57)	angka=(angka<<3)+(angka<<1)+input-48,input=gc();angka*=kali;
	}
	ll arr[100005];
	int main() {
	int t;
	scan(t);
	while(t--)
		{
		int n,k;
		scan(n);
		scan(k);
		ll sum=0;
		rep(i,n)	{scan(arr[i]);sum+=arr[i];}
		if(sum%n!=0)	
			{
			printf("-1\n");
			continue;
			}
		ll diff=sum/n;
		bool flag=1;
		for(int i=0;i<k;++i)
			{
			ll temp=0,count=0;
			for(int j=i;j<n;j+=k)	temp+=arr[j],++count;
			if(temp!=diff*count)
				{
				flag=0;
				break;
				}
			}
		if(!flag)
			{
			printf("-1\n");
			continue;
			}
		ll ans=0;
		for(int i=0;i<k;++i)
			{
			ll temp;
			for(int j=i+k;j<n;j+=k)	
				{
				if(arr[j-k]!=diff)
					{
					temp=arr[j-k]-diff;
					ans+=abs(temp);
					arr[j]+=temp;
					}
				}
			}
		printf("%lld\n",ans);
		}
	return 0;
	}
