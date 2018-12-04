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
bool M[4][1005];

ll getNumberOfWays(int n){
	if(n&1)	return 0;
	ll res=1;
	if(M[1][1] | M[2][1] | M[2][n]| M[3][n])	return 0;
	for(int i=2;i<=n-1;++i){
		if(M[2][i]){
			return 0;
		}
		if((i&1)){
			if((M[1][i] | M[1][i-1]) &&(M[3][i]|M[3][i-1])){
				return 0;
			}
			if(!M[1][i] && !M[1][i-1] && !M[3][i] && !M[3][i-1]){
				res=(res*2)%MOD;
			}
		}
	}
	return res;
}
int main()
{
	ios_base::sync_with_stdio(false);
cin.tie(NULL);
 fstream read,write;
 read.open("flow.txt",ios::in);
 write.open("flowWrite.txt",ios::out);
int t;
read>>t;
for(int test=1;test<=t;++test)
	{
	int n;
	read>>n;
	string str;
	for(int j=1;j<=3;++j){
		read>>str;
		for(int i=1;i<=n;++i){
			//cin>>ch;
			M[j][i]=(str[i-1]=='#')?1:0;
		}
		//cin>>ch;
	}
		/*for(int j=1;j<=3;++j){
		for(int i=1;i<=n;++i){
			//cin>>ch;
			//M[j][i]=(ch=='#')?1:0;
			cout<<M[j][i]<<" ";
		}
		cout<<"\n";
		//cin>>ch;
	}*/
	write<<"Case #"<<test<<": "<<getNumberOfWays(n)<<"\n";
	}
return 0;
}


