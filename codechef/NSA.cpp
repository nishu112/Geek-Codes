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
string str;
int dp[27][100005];
ll min(ll x,ll y){
	if(x>y)	return y;
	return x;
}
ll getMinValue(){
	for(int i=0;i<=26;++i){
		for(int j=0;j<=str.length();++j){
			dp[i][j]=0;
		}
	}
	for(int i=1;i<=str.length();++i){
		dp[str[i-1]-'a'+1][i]=1;
	}
	for(int i=1;i<=26;++i){
		for(int j=1;j<=str.length();++j){
			dp[i][j]+=dp[i][j-1];
		}
	}
	for(int i=1;i<=26;++i){
		for(int j=1;j<=str.length();++j){
			dp[i][j]+=dp[i-1][j];
		}
	}
	ll totalPairs=0;
	for(int i=1;i<=str.length();++i){
		totalPairs+=dp[str[i-1]-'a'][i-1];
	}
	if(!totalPairs)	return 0;
//	debug(totalPairs);
	ll MinResult=totalPairs;
	ll left,right;
	ll getValueAfterChange;
	ll prev;
	for(int i=1;i<=str.length();++i){
		int currChar=str[i-1]-'a'+1;
		 prev=dp[currChar-1][i-1]+str.length()-i-(dp[currChar][str.length()]-dp[currChar][i]);
		for(int j=1;j<=26;++j){
			//if(currChar==j)	continue;
			left=dp[j-1][i-1];
			right=str.length()-i-(dp[j][str.length()]-dp[j][i]);
			//debug(i);
			//debug2(left,right);
			getValueAfterChange=left+right;
			//if(currChar>j)	getValueAfterChange*=-1;
			MinResult=min(MinResult,totalPairs+abs(currChar-j)+getValueAfterChange-prev);
			//debug(getValueAfterChange);
		}
	}
	//debug(MinResult);
	/*for(int i=0;i<=26;++i){
		for(int j=0;j<=str.length();++j){
			cout<<dp[i][j]<<" ";
		}
		cout<<"\n";
	}*/
	return MinResult;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
int t;
cin>>t;
while(t--)
	{
	cin >> str;
	cout << getMinValue() << "\n" ;
	}
return 0;
}


