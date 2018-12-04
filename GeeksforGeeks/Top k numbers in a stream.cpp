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
list<int> elements;
unordered_map<int,int> freq;
void customInsert(int num,int k){
	freq[num]++;
	elements.remove(num);
	int i=0;
	bool isInserted=0;
	auto itr=elements.begin();
	for(;itr!=elements.end();++itr){
	if(freq[num]>freq[*itr]){
		elements.insert(itr,num);
		break;
	}
	if(freq[num]==freq[*itr] && num< *itr){
		elements.insert(itr,num);
		return;
	}
	++i;	
	}
	if(elements.size()>k){
		elements.pop_back();
		return;
	}
	if(elements.size()==k)	return;
	elements.insert(itr,num);
}
int main()
{
int t;
cin>>t;
while(t--)
	{
	freq.clear();
	elements.clear();
	int n,k;
	cin>>n>>k;
	int num;
	while(n--){
		cin>>num;
		customInsert(num,k);
		for(auto itr=elements.begin();itr!=elements.end();++itr){
			cout<< *itr<<" ";
		}
		
	}
	}
return 0;
}


