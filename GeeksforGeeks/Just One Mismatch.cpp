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
int freq[26]={0};
int l;
void cal_freq(string str)
	{
	int i=0;
	while(str[i]!='\0')
		{
		++freq[str[i]-'a'];
		++i;
		}
	}
bool check(string ch_str)
	{
	if(l!=ch_str.length())	return 0;
	int temp_freq[27]={0};
	int i=0;
	while(ch_str[i]!='\0')
		{
		++temp_freq[ch_str[i]-'a'];
		++i;
		}
	i=0;
	int diff_count=0;
	while(i<26)
		{
		diff_count+=abs(temp_freq[i]-freq[i]);
		++i;
		}
	debug(diff_count);
	return (diff_count==2)?1:0;
	}
int main()
{
vector<string> V;
string ans[]={"False\n","True\n"};
int t;
scan(t);
while(t--)
	{
	V.clear();
	int n;
	cin>>n;
	V.resize(n);
	rep(i,n)	cin>>V[i];
	string str;
	cin>>str;
	l=str.length();
	cal_freq(str);
	int i=0;
	bool flag=0;
	while(i<n )
		{
		flag=check(V[i]);
		++i;
		}
	cout<<ans[flag];
	}
return 0;
}
