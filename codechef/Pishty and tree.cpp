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
map<pair<int,int>,int > mymap;
int val[(int)1e5+5];
int temp;
bool visit[(int)1e5+5];
bool flag;
int DFS(vector<vector<int> > V,int n,int u,int v,int k)
	{
	rep(i,n+1)	val[i]=0;
	rep(i,n+1)	visit[i]=0;
	stack<int> st;
	st.push(u);
	visit[u]=true;
	while(!st.empty())
		{
		flag=0;
		//debug(st.top());
		for(auto itr=V[st.top()].begin();itr!=V[st.top()].end(); ++itr)
			{
			if(!visit[*itr])	
				{
				temp=mymap[mp(st.top(),*itr)];
				//debug(temp);
				//debug(*itr);
				val[*itr]=(temp<=k)?(val[st.top()]^temp):(val[st.top()]);
				//debug(val[*itr]);
				if(*itr==v)	return val[*itr];//wrong
				visit[*itr]=true;
				st.push(*itr);
				flag=true;
				break;
				}
			}
		//cout<<'\n';
		//debug(flag);
		if(!flag)	st.pop();
		}
	}

int main() {
//std::ios::sync_with_stdio(false);
int u,v,c,k,m;
int t;
sc(t);
while(t--)
	{
	int n;
	sc(n);
	vector<vector<int> > V(n+1);
	mymap.clear();
	rep2(i,1,n)
		{
		sc3(u,v,c);
		V[u].push_back(v);
		V[v].push_back(u);
		mymap[mp(u,v)]=c;
		mymap[mp(v,u)]=c;
		}
	
	/*for(int i=1;i<=n;++i){
		cout<<i<<":";
	for(auto itr=V[i].begin();itr!=V[i].end();++itr)
		{
		cout<<*itr<<" ";
		}
	cout<<"\n\n";
	}*/
	/*for(auto itr=mymap.begin();itr!=mymap.end();++itr)
		{
		cout<<(itr->X).X<<" "<<(itr->X).Y <<" "<<itr->Y<<'\n';
		}*/
	sc(m);
	while(m--)
		{
		sc3(u,v,k);
		printf("%d\n",DFS(V,n,u,v,k));
		/*rep(i,n+1)
			debug(val[i]);*/
		}
	}
return 0;
}
