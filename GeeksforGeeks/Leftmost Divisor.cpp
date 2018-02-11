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

#define epsilon 0.0001

int magic( long long num)
	{
	string str=to_string(num);
	//debug(num);
	int i=0,digit;
	while(str[i])
		{
		digit=(int)(str[i]-'0');
		if(digit && !(num%digit))	return digit;
		++i;
		}
	return -1;
	}

int main()
{
int t;
cin>>t;
long double p,q,result,fractionalPart,noOfDigits;
ll integralNoDigits;
cout<<setprecision(15)<<fixed;
while(t--)
	{
	cin>>p>>q;
	noOfDigits=q*(log(p)/log(10.0));
	integralNoDigits=noOfDigits+epsilon;
	//debug(noOfDigits);
	//debug(integralNoDigits);
	fractionalPart=noOfDigits-integralNoDigits;
	if(fractionalPart<epsilon)	fractionalPart=0;
	if(integralNoDigits<=17)
		{
		cout<<magic(pow(p,q))<<'\n';
		continue;
		}
	//debug(fractionalPart);
	//cout<<setprecision(9)<<fractionalPart<<'\n';
	result=pow((long double)10,9)*pow((long double)10,fractionalPart)+epsilon;
	//debug((ll)result);
	//debug(result);
	cout<<magic(result)<<'\n';	
	}
return 0;
}


