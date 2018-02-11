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
int dp[105][105],flag[105][105];
string st1,st2;
void calc()
	{
	int n=st1.length(),m=st2.length();
	rep(i,n+1)	rep(j,m+1)	flag[i][j]=0;
	rep(i,n+1)	dp[i][0]=0;
	rep(i,m+1)	dp[0][i]=0;
	for(int i=1;i<=n;++i)
		{
		for(int j=1;j<=m;++j)
			{
			if(st1[i-1]==st2[j-1])	{dp[i][j]=1+dp[i-1][j-1];flag[i][j]=true;}
			else	dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	/*rep(i,n+1)	
		{
		rep(j,m+1)	cout<<dp[i][j]<<" ";
		cout<<'\n';
		}
	rep(i,n+1)	
		{
		rep(j,m+1)	cout<<flag[i][j]<<" ";
		cout<<'\n';
		}*/
	//cout<<dp[n][m];
	}
set<string> ans;
void all_lcs(int i,int j,string str)
	{
	if(!i || !j)	
	{
		reverse(str.begin(),str.end());
		//cout<<"hey";
		ans.insert(str);
		return;
	}
	int temp=dp[i][j];
	bool flag=0;
	if(temp==dp[i-1][j])	{all_lcs(i-1,j,str);flag=1;}
	if(temp==dp[i][j-1])	{all_lcs(i,j-1,str);flag=1;}
	if(st1[i-1]==st2[j-1]) all_lcs(i-1,j-1,str+st1[i-1]);
	}
int main()
{
int t;
sc(t);
while(t--)
	{
	cin>>st1>>st2;
	calc();
	string str="";
	ans.clear();
	all_lcs(st1.length(),st2.length(),str);
	//debug(ans.size());
	for(auto itr=ans.begin();itr!=ans.end();++itr)
		{
		cout<<*itr<<'\n';
		}
	}
return 0;
}
