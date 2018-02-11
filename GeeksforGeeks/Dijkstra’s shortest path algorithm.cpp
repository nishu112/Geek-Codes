#include<iostream>
#include<limits>
using namespace std;
int min_distance(int *dist,bool *sptset,int v)
	{
	int min=INT_MAX,index=0;
	for(int i=0;i<v;++i)
		if(sptset[i]==false && min>dist[i])
			index=i,min=dist[i];
	return index;
	}
void dijkstras(int v,int *graph,int source)
	{
	bool sptset[v];
	for(int i=0;i<v;++i)
		sptset[i]=false;
	int dist[v]={0};
	for(int i=0;i<v;++i)
		dist[i]=INT_MAX;
	dist[source]=0;
	for(int i=0;i<v;++i)
		{
		int index=min_distance(dist,sptset,v);
		sptset[index]=true;
		for(int j=0;j<v;++j)
			if(sptset[j]==false && *(graph+index*v+j)!=0 && *(graph+index*v+j)+dist[index]<dist[j] )
				dist[j]=*(graph+index*v+j)+dist[index];
		}
	for(int i=0;i<v;++i)
		{
		cout<<i<<"\t\t"<<dist[i]<<'\n';
		}
	}
int main()
{
int v;
cin>>v;
int graph[v][v];
for(int i=0;i<v;++i)
	for(int j=0;j<v;++j)
		cin>>graph[i][j];
dijkstras(v,&graph[0][0],0);
return 0;
}
