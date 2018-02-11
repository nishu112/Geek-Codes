#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
	{
    int n,x,y;
    cin>>n>>x>>y;
    int i=x;
    while(i<=n)
    	{
    	if(i%y)
    		cout<<i<<" ";
    	i+=x;
    	}
    cout<<'\n';
	}

	return 0;
}
