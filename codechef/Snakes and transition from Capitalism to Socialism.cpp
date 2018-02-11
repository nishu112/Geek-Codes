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
//#define      fill(a)           memset(a, 0, sizeof (a))
#define      sortA(v)          sort(v.begin(), v.end())
#define      sortD(v)          sort(v.begin(), v.end(), greater<auto>())
#define      X                 first
#define      Y                 second

#define debug(x) cerr<<"debug->"<<#x<<"::"<<x<<endl
#define debug2(x,y) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n"
#define debug3(x,y,z) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n"


int main(int argc, char **argv) {
//std::ios::sync_with_stdio(false);
int a[505][505];
int t;
sc(t);
int v[505][505];
while(t--)
	{
	for(int i=0;i<505;++i)
		for(int j=0;j<505;++j)
			v[i][j]=0;
	int n,m;
	sc2(n,m);
	int ma=-1;//max
	int x,y;
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j)
			{
			scanf("%d",&a[i][j]);
			ma=max(ma,a[i][j]);
			//x=i,y=j;
			}
	
	vector<pair<int,int>> my;
	bool visit[n][m];
	fill(&visit[0][0],&visit[0][0] + sizeof(visit),0);
	x=0,y=0;
	for(int i=0;i<n;++i)
		for(int j=0;j<m;++j)
			if(a[i][j]==ma)
				my.push_back(mp(i,j)),visit[i][j]=1;cout<<"hey";
	int flag=1,count=0;
	vector<pair<int,int>> temp;
	while(flag)
		{
		flag=0;
		temp.clear();
		each(it,my) {
		int i=it->X,j=it->Y;
		for(int y=i-1;y<=i+1;++y)
			{
			for(int z=j-1;z<=j+1;++z)
				{
				if(!visit[y][z] && a[y][z]<ma)
					{
					flag=1;
					visit[y][z]=1;
					}
				temp.push_back(mp(y,z));
				}
			}
		}
		my=temp;
		++count;
		}
	cout<<count<<'\n';
	}
return 0;
}




