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
#define 	 pf(x)			   printf("%d\n",x);
#define      each(it,s)        for(auto it = s.begin(); it != s.end(); ++it)
#define      rep(i, n)         for(int i = 0; i < (n); ++i)
#define      fill(a)           memset(a, 0, sizeof (a))
#define      sortA(v)          sort(v.begin(), v.end())
#define      sortD(v)          sort(v.begin(), v.end(), greater<auto>())
#define      X                 first
#define      Y                 second
#define 	 wl(t)			   while(t--)
#define debug(x) cerr<<"debug->"<<#x<<"::"<<x<<endl
#define debug2(x,y) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n"
#define debug3(x,y,z) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n"

char str[2][100005];
int main(int argc, char **argv) {
std::ios::sync_with_stdio(false);
cin.tie(NULL);
int test[2]={0,0};
map<char,bool> let;
let['*']=1;
let['.']=0;
int t;
cin>>t;
wl(t)
	{
	int n;
	cin>>n;
	fill(test);
	cin>>str[0]>>str[1];
	int i=0;
	while(i<n){
		if(test[0] || test[1])	break;
		test[0]=let[str[0][i]];
		test[1]=let[str[1][i]];
		++i;
		}
	if(!test[0] && !test[1]) { cout<<0<<'\n'; continue; }
	int flag=1,extra=0,count=0;
	while(i<n){
		if(str[0][i]=='.' && str[1][i]=='.')    {++i; continue;}
		if((let[str[0][i]] & test[0]) || let[str[1][i]] & test[1])  ++count;
		else if(flag)	flag=0;
		else	++count,flag=1;
		test[0]=let[str[0][i]];
		test[1]=let[str[1][i]];
		++i;
		}
	i=0,test[0]=0,test[1]=0;
	while(i<n)
	    {
	    if(test[0] && test[1]) { extra=1; break; }
	    if(!test[0]) test[0]=let[str[0][i]];
	    if(!test[1]) test[1]=let[str[1][i]];
	    ++i;
	    }
	    
	int ans=count+extra;
	//cout<<"extra="<<extra<<'\n';
	cout<<ans<<'\n';
	}
return 0;
}
