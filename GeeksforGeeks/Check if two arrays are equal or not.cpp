#include<iostream>
using namespace std;
int main()
 {
int t;
cin>>t;
start:
while(t--)
    {
    int n;
    cin>>n;
    int a[101]={0},b[101]={0},num;
    for(int i=1;i<=n;i++)
        {
        cin>>num;
        a[num]++;
        }
    for(int i=1;i<=n;i++)
        {
        cin>>num;
        b[num]++;
        }
    for(int i=1;i<=100;i++)
        {
        if(a[i]!=b[i])
            {
            cout<<0<<'\n';
            goto start;
            }
        }
    cout<<1<<'\n';
    }

	return 0;
}
