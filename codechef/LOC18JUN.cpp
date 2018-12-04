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
char str[100001][22];
int n;
int dp[100001][22][27];
void prerequisite(){
	for(int i=0;i<26;++i){
		for(int j=0;j<20;++j)
		
		dp[0][j][i]=0;
	
	}
	char key;
	for(int i=0;i<26;++i){
		for(int j=0;j<20;++j){
			for(int k=1;k<=n;++k){
				dp[k][j][i]=dp[k-1][j][i];
				key='a'+i;
				if(str[k-1][j]==key){
				
				dp[k][j][i]+=1;
				//cout<<"yes\n";
				//cout<<"k="<<k<<"j="<<j<<"i="<<i<<"\n";
				//cout<<dp[k][j][i]<<"\n";
				}
			}
		}
	}
	/*for(int i=1;i<=n;++i){
		for(int j=0;j<=20;++j){
			cout<<dp[i][j][2]<<" ";
		}
		cout<<"\n";
	}*/
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cin>>n;
rep(i,n){
	cin>>str[i];
}
prerequisite();
int query;
cin>>query;
int l,r,c;
char p;
while(query--){
	cin>>l>>r>>c>>p;
	//scanf("%d %d %d %c\n",&l,&r,&c,&p);
/*	scan(l);
	scan(r);
	scan(c);
	scan(p);*/
	//cout<<l<<" "<<r<<" "<<c<<" "<<p<<"\n";
	//printf("%d \n",);
	cout<<dp[r][c-1][(p-'a')]-dp[l-1][c-1][(p-'a')]<<"\n";
}
return 0;
}


