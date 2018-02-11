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
#define	     pf(x)			   printf("%d ",x);
#define	     pf2(x,y)		   printf("%d %d ",x,y);
#define	     pf3(x,y,z)		   printf("%d %d %d ",x,y,z);
#define	     pfnl()	   	   	   printf("\n");
#define      each(it,s)        for(auto it = s.begin(); it != s.end(); ++it)
#define      rep(i, n)         for(int i = 0; i < (n); ++i)
#define 	 rep2(i,j,n)	       for(int i = j; i < (n); ++i)
#define      fill(a)           memset(a, 0, sizeof (a))
#define      sortA(v)          sort(v.begin(), v.end())
#define      sortD(v)          sort(v.begin(), v.end(), greater<auto>())
#define      X                 first
#define      Y                 second

#define debug(x) cerr<<"debug->"<<#x<<"::"<<x<<endl
#define debug2(x,y) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n"
#define debug3(x,y,z) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n"

bool myfun(vector<int> a,vector<int> b)
	{
	return a[0]<b[0];
	}

int main(int argc, char **argv) {
//std::ios::sync_with_stdio(false);
int x,y;
int t;
sc(t);
while(t--){
		int n;
		cin>>n;
		vector<vector<int>> V(n,vector<int>(2));
		int i=0;
		while(i<n){
			cin>>V[i][0]>>V[i][1];
			++i;
			}
		sort(V.begin(),V.end(),myfun);
		int last[2];
		last[0]=V[0][0];
		last[1]=V[0][1];
		vector<pair<int,int>> ans;
		rep2(i,1,n)	{
		if(last[1]<V[i][0])	ans.pb(mp(last[0],last[1])),last[0]=V[i][0],last[1]=V[i][1];
		else if(last[1]<V[i][1])	last[1]=V[i][1];
		}
		ans.pb(mp(last[0],last[1]));
	each(it,ans)	cout<<it->X<<" "<<it->Y<<" ";
	pfnl();
	}
return 0;
}





