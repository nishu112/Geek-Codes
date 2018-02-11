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
char str[0x400];
int dp[0x400];

int search(int l,int r,char ch){
	int mid;
	while(l<=r){
		mid=(l+r)/2;
		if(dp[mid]==ch)	return mid;
		else if(dp[mid]<ch)	l=mid+1;
		else	r=mid-1;		
	}
	return mid;
}

int Solve(){
	int l=strlen(str);
	int len=1;
	dp[0]=str[0];
	rep2(i,0,l){
		if(str[i]<=dp[0])	dp[0]=(int)str[i];
		//else if(str[i]==dp[len])
		else if(str[i]>dp[len])	 dp[len++]=(int)str[i];
		else if(dp[0]<str[i]<dp[len])
		dp[search(0,len-1,str[i])]=(int)str[i];	
		rep(i,len+1)	cout<<(char)dp[i]<<" ";
		pfnl();
	}
	return len+1;
	
}
//O(nlogn) Time complexity
//Incomplete Wrong code
int main(int argc, char **argv) {
//std::ios::sync_with_stdio(false);
int t;
sc(t);
while(t--)
	{
	cout<<"no\n";
	scanf("%s",str);
	int Ans=Solve();
	printf("%d\n",Ans);
	}
return 0;
}



