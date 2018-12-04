#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int start;
    int end;
    int distance;
    
    node(){
        }
    node(int start,int end,int distance):start(start),end(end),distance(distance)
    {}
    
};
bool operator<(const node &a,const node &b){
    return (a.distance > b.distance);
}

vector<int> getMinDistance(vector<vector<pair<int,int> > > &edges,int &n,int &source){
    vector<int> Dist(n+1,INT_MAX);
    vector<bool> Visit(n+1,0);
    priority_queue<node> pq;
    Dist[source]=0;
    pq.push(node(source,source,0));
    node temp;
    int k=0;
    while(!pq.empty() ){
        temp=pq.top();
        pq.pop();
         
        //if(Visit[temp.end]) continue;
        //--k;
        //Visit[temp.end]=1;
        for(int i=0;i<edges[temp.end].size();++i){
            if( Dist[edges[temp.end][i].first]>Dist[temp.end]+edges[temp.end][i].second ){
                Dist[edges[temp.end][i].first]=Dist[temp.end]+edges[temp.end][i].second;
                pq.push(node(temp.end,edges[temp.end][i].first,edges[temp.end][i].second));
            }
        }
    }
    
    return Dist;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<pair<int,int> > > edges(n+1);
        int x,y,s;
        while(m--){
            cin>>x>>y>>s;
            edges[x].emplace_back(make_pair(y,s));            
            edges[y].emplace_back(make_pair(x,s));            
        }
        edges[0].push_back({0,0});
        int source;
        cin>>source;
       // cout<<"Run\n";
        edges[source].push_back({source,0});
        vector<int> Res=	getMinDistance(edges,n,source);
        //cout<<"Complete\n";
        for(int i=1;i<Res.size();++i){
            
            if(i!=source )
            {
                
                if(Res[i]==INT_MAX) cout<<"-1 ";
                else    cout<<Res[i]<<" ";
            }
            
        }
        cout<<"\n";
        
    }
    return 0;
}
