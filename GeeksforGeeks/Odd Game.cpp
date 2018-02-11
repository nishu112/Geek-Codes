#include<iostream>
#include<cmath>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--)
    {
    int n;
    cin>>n;
    int res=log(n)/log(2);
    cout<<(1<<res)<<'\n';
    }
	return 0;
}
