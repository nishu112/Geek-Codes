#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    int n,m;
    cin>>n>>m;
    if(m>=32)
    	m=32;
    cout<<(n>>(m-1))<<'\n';
    }

	return 0;
}
