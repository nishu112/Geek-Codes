#include <bits/stdc++.h>

using namespace std;
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
int main()
{
vector<int> V;
int t;
scan(t);
while(t--)
	{
	int n;
	scan(n);
	V.resize(n);
	int freq[101]={0};
	int distinct_count=0;
	for(auto &x:V)	scan(x);
	for(int i=0;i<V.size();++i)	{if(!freq[V[i]]) ++distinct_count; ++freq[V[i]];}
	for(int i=0;i<=100;++i)	freq[i]=0;
	int i=0,j=0;
	int count=0,sum=0;
	//debug(distinct_count);
	while(j<n && count!=distinct_count)	
			{
			if(!freq[V[j]])	++count;
			++freq[V[j]];
			++j;
			}
		//debug(j);
	while(j<n)
		{
		sum+=n-j+1;
		//debug2(i,j);
		while(i<n && count==distinct_count)	
			{
			--freq[V[i]];
			if(!freq[V[i]])	--count;
			if(count==distinct_count)	sum+=n-j+1;
			//debug(i);
			++i;
			//debug(sum);
			}
		//debug2(count,distinct_count);
		while(j<n && count!=distinct_count)
			{
			if(!freq[V[j]])	++count;
			++freq[V[j]];
			++j;
			}
		//debug2(i,j);
		}
	if(count==distinct_count)	++sum;
	while(i<n && count==distinct_count)	
			{
			--freq[V[i]];
			if(!freq[V[i]])	--count;
			if(count==distinct_count)	++sum;
			++i;
			}
	//debug(sum);
	cout<<sum<<'\n';
	}
return 0;
}


