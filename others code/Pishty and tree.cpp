//problem PSHTTR, contest JULY17. By ccz181078
#include<bits/stdc++.h>
const int N=1e5+77;
int T,n,m;
struct Q{
	int a,b,c,id;
	bool operator<(const Q&w)const{return c<w.c;}
}qs[N];
struct edge{
	int to,c;
	bool operator<(const edge&w)const{return c<w.c;}
};
std::vector<edge>e[N];
edge es[N];
int id[N][2],idp,bit[N],as[N];
void dfs(int w,int pa=0){
	for(int i=0;i<e[w].size();++i){
		const edge&E=e[w][i];
		int u=E.to;
		if(u!=pa){
			id[u][0]=++idp;
			es[idp]=E;
			dfs(u,w);
			id[u][1]=idp;
		}
	}
}
void inc(int w,int x){
	for(;w<=idp;bit[w]^=x,w+=w&-w);
}
int sum(int w){
	int s=0;
	if(w>0)
	for(;w;w-=w&-w)s^=bit[w];
	return s;
}
int main(){
	for(scanf("%d",&T);T;--T){
		scanf("%d",&n);
		for(int i=1;i<=n;++i)e[i].clear();
		for(int i=1,a,b,c;i<n;++i){
			scanf("%d%d%d",&a,&b,&c);
			e[a].push_back((edge){b,c});
			e[b].push_back((edge){a,c});
		}
		scanf("%d",&m);
		for(int i=0;i<m;++i){
			scanf("%d%d%d",&qs[i].a,&qs[i].b,&qs[i].c);
			qs[i].id=i;
		}
		idp=0;
		dfs(1);
		memset(bit,0,sizeof(int)*(n+5));
		std::sort(es+1,es+idp+1);
		std::sort(qs,qs+m);
		for(int i=0,p=1;i<m;++i){
			for(;p<=idp&&es[p].c<=qs[i].c;inc(id[es[p].to][0],es[p].c),inc(id[es[p].to][1]+1,es[p].c),++p);
			as[qs[i].id]=sum(id[qs[i].a][0])^sum(id[qs[i].b][0]);
		}
		for(int i=0;i<m;++i)printf("%d\n",as[i]);
	}
	return 0;
} 
