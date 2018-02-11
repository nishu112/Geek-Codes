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
int arr[105];
int find_sum(stack<int> &st,int Min)
	{
	int sum=0;
	while(st.size()!=1)
		{
		sum+=abs(st.top()-Min);
		st.pop();
		}
	st.pop();
	return sum;
	}
int main() {
//std::ios::sync_with_stdio(false);
stack<int> st;
int t;
sc(t);
while(t--)
	{
	int n;
	sc(n);
	rep(i,n)    sc(arr[i]);
	int ans=0;
	while(!st.empty())  st.pop();
	int bott=0;
	rep(i,n) 
		{
		if(st.size()==0)	{st.push(arr[i]); bott=arr[i];}
		else if(arr[i]>=arr[i-1] && st.size()==1)	{st.pop(); st.push(arr[i]); bott=arr[i];}
		else if(arr[i]>=bott)
			{
			//st.push(arr[i]);
			ans+=find_sum(st,min(bott,arr[i]));
			bott=arr[i];
			st.push(arr[i]);
			}
		else	st.push(arr[i]);
		}
	int Min=(bott,arr[n-1]);
	st.pop();
	while(st.size() && st.size()!=1)
		{
		if(Min>st.top()) ans+=(Min-st.top());
		st.pop();
		}
	cout<<ans<<'\n';
	}
return 0;
}


