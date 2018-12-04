#include <bits/stdc++.h>
//Incomplete
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

//Incomplete



bool DFS(vector<pair<int,int> > &Tree,int index,int &n,vector<int> &LeafNodes){
	if(index>n)	return 1;
	if(Tree[index].first==-1){
		LeafNodes.push_back(Tree[index].second);
		return true;
	}
	if(Tree[Tree[index].first].first==-1 && Tree[Tree[index].second].first==-1){
		if(abs(Tree[Tree[index].first].second-Tree[Tree[index].second].second)>1)	return false;
	}
	return DFS(Tree,Tree[index].first,n,LeafNodes)&&DFS(Tree,Tree[index].second,n,LeafNodes);
}
int solve(){
	int n;
	cin>>n;
	vector<pair<int,int> > Tree(n+1);
	int left,right;
	for(int i=1;i<=n;++i){
		cin>>left>>right;
		Tree[i]={left,right};
	}
	vector<int > LeafNodes;
	bool feasible;
	if(!DFS(Tree,1,n,LeafNodes,feasible))	return -1;
	
}
int main()
{
int t;
cin>>t;
while(t--)
	{
	solve();
	}
return 0;
}


