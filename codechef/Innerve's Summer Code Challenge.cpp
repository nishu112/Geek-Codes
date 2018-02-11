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
int main() {
int t;
sc(t);
string ans[]={"YES\n","NO\n"};
map<char,char> mymap1,mymap2;
while(t--)
	{
	string st1,st2;
	cin>>st1>>st2;
	if(st1==st2)	{cout<<ans[0]; continue;}
	if(st1.length()!=st2.length())	{cout<<ans[1]; continue;}
	int i=0;
	bool flag=0;
	mymap1.clear();
	mymap2.clear();
	map<char,char> ::iterator itr1,itr2;
	while(st1[i])
		{
		itr1=mymap1.find(st1[i]);
		itr2=mymap2.find(st2[i]);
		if(itr1!=mymap1.end() || itr2!=mymap2.end())
			{
			if(itr1->Y !=st2[i] || itr2->Y!=st1[i])
				{
				flag=1;
				break;
				}
			}
		else
			{
			mymap1[st1[i]]=st2[i];
			mymap2[st2[i]]=st1[i];
			}
		++i;
		}
	cout<<ans[flag];
	}
return 0;
}



