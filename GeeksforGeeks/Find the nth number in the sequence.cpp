#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    long long n;
    cin>>n;
    long long x=ceil((-1+sqrt(1+8*n))/2)-1;
    cout<<n-(x*(x+1))/2<<'\n';
    }

	return 0;
}
