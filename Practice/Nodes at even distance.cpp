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

void magic()
	{
	ll n;
	cin>>n;
	if(n<=2)	{printf("0\n"); return;	}
	vector<ll> arr[n+1];
	int q=n-1;
	int a,b;
	while(q--)
		{
		sc2(a,b);
		if(a>b)	swap(a,b);
		arr[a].pb(b);
		}
	/*for(int i=1;i<=3;++i)
		{
		for(auto itr=arr[i].begin();itr!=arr[i].end();++itr)
			{
			cout<<*itr<<" ";
			}
		cout<<'\n';
		}*/
	//return ;
	bool visit[n+1];
	memset(visit,0,n+1);
	visit[1]=true;
	bool flag,add;
	stack<ll> st;
	st.push(1);
	ll odd_count=0,even_count=0,temp=0;
	++odd_count;
	add=1;
	while(!st.empty())
		{
		//if(st.size()>=5)	break;
		temp=st.top();
		flag=0;
		for(auto itr=arr[temp].begin();itr!=arr[temp].end();++itr)
			{
			if(!visit[*itr])
				{
				visit[*itr]=1;
				st.push(*itr);
				(add)?(++even_count):(++odd_count);
				add=!add;
				flag=1;
				break;
				}
			else	add=!add;
			}
		if(!flag)	st.pop();
		}
	ll x=(((ll)even_count)*(even_count-1))/2;
	ll y=(((ll)odd_count)*(odd_count-1))/2;
	printf("%lld\n",x+y);
	}
int main() 
{
int t;
sc(t);
while(t--)
	{
	magic();
	}
return 0;
}



