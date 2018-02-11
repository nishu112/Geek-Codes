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
int arr[10005];
int main() {
int t;
sc(t);
while(t--)
	{
	int n;
	sc(n);
	rep(i,n)	sc(arr[i]);
 	int Max_neg=INT_MIN,Min_pos=INT_MAX,even_pos_sum=0,odd_pos_sum=0;
 	int count1=0,count2=0;
 	rep(i,n)
 		{
 		if(!(arr[i]&1))	{if(arr[i]>0)	even_pos_sum+=arr[i];}
 		else
 			{
 			if(arr[i]>0)	++count1,odd_pos_sum+=arr[i],Min_pos=min(Min_pos,arr[i]);
 			else	++count2,Max_neg=max(Max_neg,arr[i]);
			}
		}
	bool flag=1;
	int ans=0;
	if((count1&1))	ans=odd_pos_sum;
	else if(!count1 && count2)	ans=Max_neg;
	else if(count1 && !count2)	ans=odd_pos_sum-Min_pos;
	else if(count1 && count2 ) {ans=(Min_pos+Max_neg>=0)?Max_neg:-Min_pos; ans+=odd_pos_sum;
	//cout<<Min_pos<<" "<<Max_neg<<" "<<odd_pos_sum<<" "<<ans<<'\n';
	}
	else if(!count1 && !count2)	flag=0;
	//ans+=even_pos_sum;
	//cout<<count1<<" "<<count2<<" "<<ans<<" "<<odd_pos_sum<<" "<<even_pos_sum<<'\n';
	ans+=even_pos_sum;
	ans=(flag)?ans:-1;
	//debug(ans);
	printf("%d\n",ans);
	}
return 0;
}



