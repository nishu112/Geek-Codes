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
 
 
double first,second,inverseOf2;
double customMul(double a ,double b){
	double res=a*b;cout.precision(10);
	int fact=abs(res/MOD);
	if(res<0)
		{
		res+=(fact+1)*MOD;
		}
	else{
	res-=fact*(double)MOD;	
	}
	
	return res;
}
double mypow(double a,int n)
	{cout.precision(10);
	if(!n)	return a;
	double res=1;
	cout<<"inside power function\n";
	debug(a);
	while(n)
		{
		if(n&1)	res=(res*a)%MOD;
		a=a*a;
		n>>=1;
		}
	debug(res);
	
	cout<<"value inside pow "<<res<<'\n';
	return res;
	}
 
ll solve(int &x,int &y,int n)
	{cout.precision(10);
	double a,b;
	debug(x);
	debug(y);
	b=(x*((1+sqrt(5))/2)-y)/sqrt(5);
	a=x-b;
	debug(a);
	debug(b);
	double a1,a2,a3;
	debug(first);
	debug(second);
	cout<<"second="<<second<<'\n';
	cout<<"inverseOf2="<<inverseOf2<<'\n';
	a1=a*first;
	a2=b*second;
	a3=(a1+a2)*inverseOf2;
	debug(a1);
	debug(a2);
	debug(a3);
	double fn=a3;
	debug((long long )fn);
	return (long long )fn;
	}
int customInverse(int a,ll n)
	{cout.precision(10);
	int rem=(n*(MOD-2))%(MOD-1);
	debug(rem);
	int temp=(int)mypow(2,rem);
	debug(temp);
	return temp;
	}
int main()
{
int t;
scan(t);
while(t--)
	{
	int n,m;
	cin>>m>>n;
	vector<int> A(m);
	vector<int> B(m);
	for(int i=0;i<m;++i)	cin>>A[i];
	for(int i=0;i<m;++i)	cin>>B[i];
	cout.precision(10);
	long long result=0;
	first=mypow((1+sqrt(5)),n);
	second=mypow((1-sqrt(5)),n);
	inverseOf2=customInverse(2,n);
	for(int i=0;i<m;++i)
		{
		for(int j=0;j<m;++j)
			{
			result=(result+solve(A[i],B[j],n))%MOD;
			}
		}
	cout<<result<<'\n';
	}
return 0;
}
