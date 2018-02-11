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
int n;
vector<string> v;
bool visit[15][15];
bool loc[15];
bool check(int row,int col)
	{
	for(int i=row,j=col;i>=1 && j>=1 ;--i,--j)
		{
		if(visit[i][j])	return false;
		}
	for(int i=row,j=col;i<=n && j>=1 ;++i,--j)
		{
		if(visit[i][j])	return false;
		}
	debug2(row,col);
	return true;
	}
void solve(int i,string str)
	{
	//debug(str);
	if(i==n+1)
		{
		v.push_back(str);
		return;
		}
	for(int j=1;j<=n;++j)
		{
		if(check(j,i) && !loc[j])
			{
			visit[j][i]=1;
			loc[j]=1;
			solve(i+1,str+to_string(j)+" ");
			visit[j][i]=0;
			loc[j]=0;
			}
		}
	}
int main()
{
int t;
sc(t);
while(t--)
	{
	sc(n);
	if(n==1)
		{
		cout<<"[1 ]\n";
		continue;
		}
	v.clear();
	solve(1,"");			//n queen
	rep(i,11)	rep(j,11)	visit[i][j]=0;
	rep(i,11)	loc[i]=0;
	//sort(v.begin(),v.end());
	for(auto itr=v.begin();itr!=v.end();++itr)
		{
		cout<<"[";
		cout<<*itr;
		cout<<"] ";
		}
	if(!v.size())	cout<<-1;
	cout<<'\n';
	}
return 0;
}

