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

char Res[2][6]={"yes\n","no\n"};
int A[30];

int main()
{

A[0]=0;
int t;
scanf("%d\n",&t);
while(t--)
	{
	//sanskar.clear();
	ll n;
	ll k;
	scanf("%lld %lld",&n,&k);
	int num;
	ll sum=0;
	for(int i=1;i<=n;++i){
		scanf("%d",&A[i]);
		sum+=A[i];
		//sanskar[num]++;
	}
	if(sum%k!=0 || A[n]*k>sum){
		printf("%s",Res[1]);
		continue;
	}
	sort(A,A+n+1);
	ll target=sum/k;
	bool choose=0;
	ll currSum=0;
	int l=1,r=n;
	
	while(l<=r){
		currSum=0;
		//debug2(l,r);
		//if(l>n || r<0) break;
		int last=r;assert(l<=n);
		assert(r>=0);
		while(last>=l && currSum<target){
			currSum+=A[last];
			--last;
		}
		if(currSum>target){
			
			++last;
			currSum-=A[last];
		}
		r=last;
		
		int start=l;
		while(start<=r && currSum<target ){
			currSum+=A[start];
			++start;			
		}
		l=start;
		//cout<<" l="<<l<<" r="<<r<<"\n";
		if(currSum!=target){
			choose=1;
			//cout<<"in\n";
			//debug2(l,r);
			break;
		}
	}
	printf("%s",Res[choose]);
	}
return 0;
}


