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
#define 	 all(v)			   v.begin(),v.end()
#define      X                 first
#define      Y                 second


#define debug(x) cerr<<"debug->"<<#x<<"::"<<x<<endl
#define debug2(x,y) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n"
#define debug3(x,y,z) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n"
#define MOD 1000000007
vi l,r;
int root,n1,n2;
void magic()
	{
	//debug2(l_s,r_s);
	//debug(root);
	if(n1!=0 && n2!=0)
		{
		//cout<<"root="<<root<<'\n';
		if(root<min(l[0],r[0]) || root>max(l[0],r[0]))
			{
			//cout<<"l[0]="<<l[0]<<" root="<<root<<'\n';
			swap(root,l[0]);
			//cout<<"l[0]="<<l[0]<<" root="<<root<<'\n';
			}
		}
	if(n1+2==n2)
		{
		l.pb(root);
		push_heap(all(l));
		root=r[0];
		pop_heap(all(r),greater<int>());
		//cout<<"before r "<<n2<<'\n';
		r.pop_back();
		--n2;
		++n1;
		//cout<<"after r "<<r.size()<<'\n';
		}
	else if(n1==2+n2)
		{
		r.pb(root);
		push_heap(all(r),greater<int>());
		root=l[0];
		pop_heap(all(l));
		//cout<<"before l "<<l.size()<<'\n';
		r.pop_back();
		//cout<<"after l "<<l.size()<<'\n';
		--n1,++n2;
		}
	//debug(root);
	}
int main(int argc, char **argv) {
//std::ios::sync_with_stdio(false);
//cin.tie(NULL);
//cout.tie(NULL);
n1=0,n2=0;
int n,num,temp;
cin>>n;
--n;
cin>>root;
cout<<root<<"\n";
while(n--)
	{
	temp=0;
	cin>>num;
	if(root>num)
		{
		l.emplace_back(num);
		push_heap(all(l));
		++n1;
		}
	else
		{	
		r.emplace_back(num);
		push_heap(all(r),greater<int>());
		++n2;
		}
	magic();
	if(n1==n2)	{cout<<root<<"\n";continue;}
	temp=(n1>n2)?l[0]:r[0];
	//debug2(root,temp);
	cout<<(root+temp)/2;
	cout<<endl;
	}
return 0;
}


