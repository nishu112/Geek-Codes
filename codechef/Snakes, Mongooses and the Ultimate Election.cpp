#include <bits/stdc++.h>

using namespace std;
#define 	 ll				   long long
#define      pii               std::pair<int,int>
#define      vi                std::vector<int>
#define      vll               std::vector<long long>
#define      mp(a,b)           make_pair(a,b)
#define      pb(a)             push_back(a)
#define		 sc(x)			   scanf("%d",&x)
#define		 sc2(x,y)		   scanf("%d%d",&x,&y)
#define		 sc3(x,y,z)		   scanf("%d%d%d",&x,&y,&z)
#define      each(it,s)        for(auto it = s.begin(); it != s.end(); ++it)
#define      rep(i, n)         for(int i = 0; i < (n); ++i)
#define 	 reps(i,j,n)	   for(int i = j; i < (n); ++i)
//#define      fill(a)           memset(a, 0, sizeof (a))
#define      sortA(v)          sort(v.begin(), v.end())
#define      sortD(v)          sort(v.begin(), v.end(), greater<auto>())
#define 	 all(v) 		   v.begin(),v.end()
#define      X                 first
#define      Y                 second

int main(int argc, char **argv) {
//std::ios::sync_with_stdio(false);
std::cin.tie(NULL);
string ans[]={"tie","snakes","mongooses"};
int snakes=0,mongoo=0;
int t;
sc(t);
while(t--)
	{
	snakes=0,mongoo=0;
	string str;
	cin>>str;
	rep(i,str.length())	(str[i]=='s')? ++snakes:++mongoo;
	if(mongoo>snakes)	{cout<<ans[2]<<'\n'; continue; }
	vector<bool> visit(str.length());
	std::fill(visit.begin(),visit.end(),false);
	reps(i,1,str.length()) if(str[i]!=str[i-1] && visit[i-1]==false)
							visit[i]=true,--snakes;
	int flag=0;
	if(snakes>mongoo)	flag=1;
	else if(snakes<mongoo)   flag=2;
 	cout<<ans[flag]<<'\n';					
	}
return 0;
}




