#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    int k;
    cin>>k;
    cout<<fixed;
    std::cout.precision(k);
    double d=355.0/113.0;
    cout<<d<<'\n';
    }

	return 0;
}
