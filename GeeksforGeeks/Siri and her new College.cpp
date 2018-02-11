#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    int n,m,k;
    cin>>n>>m>>k;
    int sum=n;
    int r=0;
    while((n+r)/m>=1)
        {
        int temp=(n+r)/m;
        r=(n+r)%m;
        n=(n+r)/m;
        
        //cout<<"n="<<n<<"  r="<<n+r<<'\n';
        sum+=temp;
        }
    if(k<=sum)
        cout<<0<<'\n';
    else
        {
        //cout<<"sum="<<sum<<'\n';
        sum+=(k-sum)/m;
        if(k<=sum)
            cout<<0<<'\n';
        else
            cout<<k-sum<<'\n';
        //cout<<"sum="<<sum<<'\n';
        }
    }

	return 0;
}
