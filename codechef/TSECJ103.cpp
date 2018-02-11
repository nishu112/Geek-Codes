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
int t;
sc(t);
bool found;
string str,ans[]={"YES\n","NO\n"};
char st1[10005],st2[10005];
while(t--)
	{
	scanf("%s %s",st1,st2);
	//cout<<st1<<" "<<st2<<" hey\n";
	int l=strlen(st1),m=strlen(st2);
	int n,i,j;
	cin>>n;
	while(n--)
		{
		found=false;
		i=0,j=0;
		fflush(stdin);
		getline(cin,str);
		//cout<<"hey\n "<<str<<" No\n";
		//0cin.ignore();
		if((l+m)!=str.length())
			{
			cout<<ans[1];
			continue;
			}
		int k=0;
		while(str[k])
			{
			if(i<l && st1[i]==str[k])	++i;
			else if(j<m && st2[j]==str[k])	++j;
			else	
				{
				found=true;
				break;
				}
			//debug2(i,j);
			++k;
			}
		cout<<ans[found];
		}
	//pfnl();
	}
return 0;
}



