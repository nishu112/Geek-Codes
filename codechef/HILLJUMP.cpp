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
#define 	gc()				getchar_unlocked()
 
#define debug(x) cerr<<"debug->"<<#x<<"::"<<x<<endl
#define debug2(x,y) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n"
#define debug3(x,y,z) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n"
#define MOD 1000000007
 
template <typename T> void scan(T &angka){
	angka=0;char input=gc();T kali=1;
	while(!(48<=input&&input<=57)){	if(input=='-')	kali=-1;input=gc();}
	while(48<=input&&input<=57)	angka=(angka<<3)+(angka<<1)+input-48,input=gc();angka*=kali;
}
ll arr[(int)1e5+5],n,q;
int loop;
void change()
	{
	int l,r,x;
	scan(l);
	scan(r);
	scan(x);
	for(int i=l;i<=r;++i) arr[i]+=x;
	}
int element()
	{
	int i,k;
	scan(i);
	scan(k);
//	int ind=i;//ind return index;
	//ll val=arr[i];
	loop=0;
	/*for(int i=index+1;k && i<=n;++i)
		{
		if(val<arr[i]&&(loop<100))	{val=arr[i];ind=i;--k;loop=0;}
		else loop++;
		}
	*/
	int q=i;
	while(k&&loop!=100&&i<n)
	{
		if(arr[i+1]>arr[q])
		{
			k--;
			q=i+1;
			loop=0;
		}
		else
		{
			loop++;
		}
		i++;
	}
	//debug(ind+index);
	//return (!k)?q:index;
	return q;
	}
int main() 
{
sc2(n,q);
rep2(i,1,n+1)	scan(arr[i]);
int ch;
while(q--)
	{
	scan(ch);
	if(ch==1)	printf("%d\n",element());
	else change();
	}
return 0;
}  
