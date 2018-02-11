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
int main(int argc, char **argv) {
//std::ios::sync_with_stdio(false);
map<char,int> val;
val['(']=1;
val[')']=-1;
int t;
sc(t);
cout<<"no";
while(t--)
	{
	string str;
	cin>>str;
	int i=0,curr=0,prev=0,count=0,Max=0,prev_count=0,prev_size=0,neg_size=0;
	while(str[i]){
		cout<<"hey";
		curr+=val[str[i]];
		if(curr<0)	curr=0,++neg_size;
		if(prev>curr && curr==0  ){
			++count;
			if(prev_size==neg_size)
				prev_count+=count;
			else	prev_count=count;
			prev_size=neg_size;
			count=0;
			Max=max(prev_count,Max);
			}
		else if(prev>curr && curr >0 )	++count;
		prev=curr;
		debug2(Max,count);
		Max=max(Max,count);
		++i;
	}
	pf(count<<1);
	pfnl();
	}
return 0;
}



