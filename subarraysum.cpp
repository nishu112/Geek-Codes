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
vector<long long > Arr;
const int  MAX_ROW=9;
const int MAX_BIT=(1<<22);
int dp[MAX_ROW+1][MAX_BIT+1];
bool solve(int n,int k){
	long long sum=0;
	for(int i=0;i<n;++i)	sum+=Arr[i];
	if(sum%k!=0 || n<k)	return 0;
	if(sum==0)	return 1;
	for(int i=0;i<k;++i)	for(int j=0;j<MAX_BIT;++j)	dp[i][j]=0;
	dp[0][0]=1;
	long long int  x=sum/k;
	int Max=(1<<n);
	for(int i=0;i<k;++i)
		{
		for(int mask=0;mask<Max;++mask)
			{
				sum=0;
			if(!dp[i][mask])	continue;
			for(int j=0;j<n;++j)
				{
				if(mask &(1<<j))	sum+=Arr[j];
				}
			sum-=i*x;
			for(int j=0;j<n;++j)
				{
				if((mask & (1<<j)))	continue;
				int new_mask=mask|(1<<j);
				//cout<<sum<<" values  ";
				if(sum+Arr[j]==x)
					{
					dp[i+1][new_mask]=1;
					}
				if(sum+Arr[j]<x)	dp[i][new_mask]=1;				
				}
	}


}
	return dp[k][Max-1];
}

string Ans[]={"no\n","yes\n"};

int main()
{
int t;
cin>>t;
while(t--)
	{
	int n,k;
	cin>>n>>k;
	Arr.resize(n);
	for(int i=0;i<n;++i)	cin>>Arr[i];
	bool ans=solve(n,k);
	
	Arr.clear();
	cout<<Ans[ans];
	}
return 0;
}


