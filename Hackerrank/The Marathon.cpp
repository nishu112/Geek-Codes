#include <bits/stdc++.h>
//INCOMPLETE
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

#define debug(x) cerr<<"debug->"<<#x<<"::"<<x<<endl
#define debug2(x,y) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n"
#define debug3(x,y,z) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n"
#define MOD 1000000007

vector<vector<int>  > graph(140005);
bool visit[140005];
bool visitin[140005];
stack<int> st;
int n,m;
int ans;

void calc(){
	fill(visit)	;
	while(!st.empty())	st.pop();
	rep2(i,1,n+1){
	if(visit[i] || graph[i].size()==0)	continue;
	visit[i]=1;
	st.push(i);	
	int j=i;
	rep2(i,1,n+1)	visitin[i]=0;
	while(!st.empty()){
		debug(st.top());
		//cout<<"hey";
		cout<<"value="<<visitin[j]<<'\n';
		
		if(graph[st.top()].size())
			{
			int temp=st.top();
			j=graph[st.top()][graph[st.top()].size()-1];
			visit[j]=1;
			if(visitin[j])	{debug(j); ++ans;}
			else	visitin[j]=1;
			st.push(j);
			graph[temp].pop_back();
			}
		else	st.pop();
		}
	}
}

int main(int argc, char **argv) {
//std::ios::sync_with_stdio(false);
int num1,num2;
int t;
sc(t);
while(t--)
	{
	graph.clear();
	sc2(n,m);
	rep(i,m)		{sc2(num1,num2); graph[num1].emplace_back(num2);	}
	rep2(i,1,n+1)	{
	for(auto itr:graph[i])	cout<<itr<<" "; pfnl();}
	ans=0;
	calc();
	debug(ans);
	pfnl();
	}
return 0;
}


