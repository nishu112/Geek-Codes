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

bool isValid(ll X,ll A,ll B){
	return (((A-X)>0)&& ((B-X))>0);
}

void printArea(double X,double Y,ll A,ll B){
	ll x1,x2,x3,x4;
	x1=ceil((X+Y)/6);
	x2=floor((X+Y)/6);
	x3=ceil((X-Y)/6);
	x4=floor((X-Y)/6);
	ll x=5;
	ll MaxVolume=INT_MIN;
	//cout<<x1<<" "<<x2<<" "<<x3<<" "<<x4<<"\n";;;
	if(isValid(x1,A,B)){
		if(x1*(A-x1)*(B-x1)>=MaxVolume){
			MaxVolume=		x1*(A-x1)*(B-x1);
			x=x1;
		}
	}
	if(isValid(x2,A,B)){
		if(x2*(A-x2)*(B-x2)>=MaxVolume){
			MaxVolume=		x2*(A-x2)*(B-x2);
			x=x2;
		}
	}
	if(isValid(x3,A,B)){
		if(x3*(A-x3)*(B-x3)>=MaxVolume){
			MaxVolume=		x3*(A-x3)*(B-x3);
			x=x3;
		}
	}
	if(isValid(x4,A,B)){
		if(x4*(A-x4)*(B-x4)>=MaxVolume){
			MaxVolume=		x4*(A-x4)*(B-x4);
			x=x4;
		}
	}
	//cout<<x<<" "<<MaxVolume;
	printf("%lld %lld",x,MaxVolume);
}
int main()
{
int t;
cin>>t;
while(t--)
	{
	ll A,B;
	scanf("%lld %lld",&A,&B);
	double X=2*(A+B);
	double Y=sqrt(4*A*A+4*B*B-4*A*B);
	printArea(X,Y,A,B);
	printf("\n");
	}
return 0;
}


