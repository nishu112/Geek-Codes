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
int A[100005];
void solve(int n){
	vector<int>   elligible;
	//rep(i,n)	cout<<dp[i]<<" ";
	//cout<<'\n';
	if(A[0]<A[1])	elligible.push_back(0);
	for(int i=1;i<n-1;++i)		if(A[i-1]>A[i] && A[i]<A[i+1])		elligible.push_back(i);
	if(A[n-2]>A[n-1])	elligible.push_back(n-1);
	for(auto itr=elligible.begin();itr!=elligible.end();++itr)	cout<<*itr<<" "<<A[*itr]<<" ";
	cout<<"\nelligible end\n";
	vector<int> selected(n,0);
	int currentDiff,prevDiff=0;
	int j;
	for(int i=0;i<elligible.size();++i)
		{		
		if(prevDiff==0 || selected[elligible[i-1]]==2)
			{
			A[elligible[i]]*=-1;
			selected[elligible[i]]=1;prevDiff=0;
			//cout<<"first or last???  "<<i<<'\n';
			}
		currentDiff=elligible[i]-elligible[i-1];
		if(!prevDiff)
			{//debug(elligible[i]);
		//debug(A[elligible[i]]);
			prevDiff=currentDiff;
			//debug(selected[elligible[i]]);
			debug(i);
		debug(elligible[i]);
		debug(A[elligible[i]]);
			continue;
			}
		if(prevDiff==2 && currentDiff==2)
			{
			if(A[elligible[i-1]+1]+A[elligible[i-1]]-A[elligible[i]]>0)
				{
				A[elligible[i]]*=-1;
				selected[elligible[i]]=1;
				}
			else if(abs(A[elligible[i-1]])<=A[elligible[i]])
				{
				A[elligible[i-1]]*=-1;
				A[elligible[i]]*=-1;
				j=i-2;
				prevDiff=elligible[j+1]-elligible[j];
				while(j>=0 && selected[elligible[j]]!=2 && prevDiff==2 )
					{
					A[elligible[j]]=-1*A[elligible[j]];
					--j;
					if(j>=0)	prevDiff=elligible[j+1]-elligible[j];
					}
				}
			else	selected[elligible[i]]=2;
			}
		else if(currentDiff>2)
			{
			A[elligible[i]]*=-1;
			selected[elligible[i]]=1;
			}
		else{
			if(A[elligible[i-1]+1]+A[elligible[i-1]]-A[elligible[i]]>0)
				{
				A[elligible[i]]*=-1;
				selected[elligible[i]]=1;
				}
			else if(abs(A[elligible[i-1]])<A[elligible[i]])
				{
				A[elligible[i-1]]*=-1;
				A[elligible[i]]*=-1;
				selected[elligible[i]]=1;
				}
			else	selected[elligible[i]]=2;
			}
		debug(i);
		debug(elligible[i]);
		debug(A[elligible[i]]);
		prevDiff=currentDiff;
		//debug(selected[elligible[i]]);
		for(int j=0;j<n;++j)	cout<<A[j]<<" ";
		cout<<"\n";
		}
}
int main()
{
int t;
scan(t);
while(t--)
	{
	int n;
	cin>>n;
	for(int i=0;i<n;++i)	cin>>A[i];
	solve(n);
	for(int i=0;i<n;++i)	cout<<A[i]<<" ";
	cout<<'\n';
	}
return 0;
}


