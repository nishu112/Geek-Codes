#include<iostream>
#include<cmath>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--)
    {
    unsigned long int n;
    cin>>n;
    if(n%2==0)
        {
        n/=2;
        n=7*pow(3,n-1);
        }
    else
        {
        n=(n+1)/2;
        n=pow(n,4);
        }
    cout<<n<<"\n";
    }

	return 0;
}
