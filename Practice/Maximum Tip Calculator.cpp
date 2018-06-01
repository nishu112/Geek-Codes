#include <bits/stdc++.h>

using namespace std;

class priorityStructure{
	public:
	priorityStructure(int x,int y):index(x),diff(y){	}
    int index;
    int diff;
};

  bool operator<(const priorityStructure &l, const priorityStructure & r)
  {
      return l.diff < r.diff;
  }

void solve(){
    int n,X,Y;
    cin>>n>>X>>Y;
    vector<int> A(n),B(n);
    vector<int> visit(n,0);// i am storing the the waiter values in this 1 means 1st waiter and 2 means second waiter
    						// initially put 0 in this
    for(int i=0;i<n;++i)    cin>>A[i];
    for(int i=0;i<n;++i)    cin>>B[i];
    priority_queue<priorityStructure> pq;
    
    for(int i=0;i<n;++i)        pq.push(priorityStructure(i,abs(A[i]-B[i])));// insert all the index and corresponding absolute difference
    							// i am using difference values to set maximum priority
    							// max diff means max priority
    							// so if we have 2 same corresponding values 
    							//then that index value have the lowest priorty (because we can choose any waiter for that because values are same 
    while(!pq.empty() && X&& Y){
    	if(A[pq.top().index]<B[pq.top().index])//now for the max difference checking that from which array A or B we can get 
    		{									//get max values 
    		visit[pq.top().index]=2;   //we assign waiter 2 for pq.top().index (index)
    		--Y;// decrement the number of orders a waiter can take because 
			}
		else
			{
			visit[pq.top().index]=1;//same goes here
			--X;
			}
    	pq.pop();
	}
	while(X && !pq.empty())// case when number of orders for waiter B becomes 0
		{
		visit[pq.top().index]=1;//keep assigning task to waiter 1
		pq.pop();
		--X;
		}
	while(Y && !pq.empty())//similar case
		{
		visit[pq.top().index]=2;
		pq.pop();
		--Y;
		}
	int Ans=0;
	for(int i=0;i<n;++i)//now calculate total answer based on the data we stored in visit
		{
		if(visit[i]==1)	Ans+=A[i];
		else	Ans+=B[i];
		}
	cout<<Ans<<"\n";
}
int main(int argc, char **argv) {
//std::ios::sync_with_stdio(false);
int t;
cin>>t;
while(t--)
	{
	solve();
	}
return 0;
}

