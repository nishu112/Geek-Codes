#include<iostream>
using namespace std;
int gcd(int a,int b)
    {
    if(a==0)
        return b;
    if(b==0)
        return a;
    return gcd(b,a%b);
    }
int main()
 {
int t;
cin>>t;
while(t--)
    {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int hcf=arr[0];
    for(int i=1;i<n;i++)
        {
        if(hcf>gcd(arr[i-1],arr[i]))
            hcf=gcd(arr[i-1],arr[i]);
        }
    cout<<hcf<<"\n";
    }

	return 0;
}
