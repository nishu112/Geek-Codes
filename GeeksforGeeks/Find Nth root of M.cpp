#include<iostream>
#include<cmath>
using namespace std;
int checkint(float n)
	{
	return (n-floor(n))<0.000000000001 ? n:-1;
	}
int main()
{
int t;
cin>>t;
while(t--)
    {
    int n,m;
    cin>>n>>m;
    int res=checkint(pow(m,1.0/n));
    cout<<res<<'\n';
	//cout<<'\n';
    }

	return 0;
}
