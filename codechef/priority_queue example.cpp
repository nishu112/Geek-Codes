#include <bits/stdc++.h>

using namespace std;
 class vertexWithDistance{
    public:
    int start;
    int end;
    int Distance;
    vertexWithDistance(int start,int en,int Distance):start(start),end(end),Distance(Distance)
    {
        
    }
};

bool operator<(const vertexWithDistance &a,const vertexWithDistance &b){
    return (a.Distance>=b.Distance);
}

int main()
{
priority_queue<vertexWithDistance> pq;
pq.push(vertexWithDistance(1,5,10));
pq.push(vertexWithDistance(8,15,50));
pq.push(vertexWithDistance(15,3,70));
pq.push(vertexWithDistance(6,9,30));

while(!pq.empty()){
	vertexWithDistance p=pq.top();
	pq.pop();
	cout<<p.start<<" "<<p.end<<" "<<p.Distance<<"\n";
}
 
return 0;
}


