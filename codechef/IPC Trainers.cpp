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
struct ipc
	{
	ll d,t,s;
	ipc(ll di,ll ti,ll si):d(di),t(ti),s(si)	{	}
	};
bool myfun(const ipc &a ,const ipc &b)
	{return (a.d<b.d);}
int main() {
vector<ipc> V;
priority_queue<pair<ll,ll> > pq;
int t;
ll n,d,di,ti,si;
//priority_queue<ipc > v;
sc(t);
while(t--)
	{
	V.clear();
	scanf("%lld%lld",&n,&d);
	for(int i=0;i<n;++i)
		{
		scanf("%lld%lld%lld",&di,&ti,&si);
		V.push_back(ipc(di,ti,si));
		}
	sort(V.begin(),V.end(),myfun);
	pq=priority_queue<pair<ll,ll> >();
	int j=0;
	ll pre=V[0].d,temp=V[0].d,diff=0,temp_val=0;
	while(j<n && temp==pre)
		{
		pq.push( mp( V[j].s,V[j].t ) );
		++j;
		temp=V[j].d;
		}
	//debug2(j,n);
	ll sum=0;
	int i=j;
	while(i<n)
		{
		//cout<<"no";
		temp=V[i].d;
		diff=temp-pre;
		while(diff && !pq.empty())
			{
			//debug(pq.size());
			if(pq.top().Y <=diff)
				{
				diff-=pq.top().Y;
				sum+=(pq.top().X)*(pq.top().Y);
				//debug2(sum,(pq.top().X)*(pq.top().Y));
				//debug2(pq.top().X,pq.top().Y);
				pq.pop();
				}
			else
				{
				pair<ll,ll> temp_pair=pq.top();
				sum+=(pq.top().X)*diff;
				//debug2(sum,(pq.top().X)*diff);
				temp_pair.Y -= diff;
				pq.pop();
				pq.push(temp_pair);
				diff=0;
				}
			//debug(pq.size());
			}
		pre=temp;
		while(i<n && temp==pre)
			{
			pq.push(mp(V[i].s,V[i].t));
			++i;
			temp=V[i].d;
			}
		//if(flag>1 && i<n)	--i;
		//cout<<"val="<<sum<<'\n';
		//debug(i);
		}
	diff=d+1 - pre;
	//cout<<"outer\n";
	//debug2(d+1,pre);
	/*while(!pq.empty())//rempve after debugging	
		{
		cout<<pq.top().X<<" "<<pq.top().Y<<'\n';
		pq.pop();
		}*/
	//debug(i);
	while(diff && !pq.empty())
		{
		if(pq.top().Y <=diff)
			{
			//pq.top().Y=0;
			sum+=(pq.top().X)*(pq.top().Y);
			//debug2(sum,(pq.top().X)*(pq.top().Y));
			diff-=pq.top().Y;
			pq.pop();
			}
		else
			{
			pair<ll,ll> temp_pair=pq.top();
			temp_pair.Y -= diff;
			sum+=(pq.top().X)*diff;
			//debug2(sum,(pq.top().X)*diff);
			pq.pop();
			pq.push(temp_pair);
			diff=0;
			}
		}
	sum=-sum;
	//debug(sum);
	//cout<<"hey";
	for(auto itr=V.begin();itr!=V.end();++itr)
		{
		//printf("%d %d %d\n",itr->d,itr->t,itr->s);
		sum+=(itr->t)*(itr->s);
		}
	printf("%lld\n",sum);
	
	}
return 0;
}



