#include<iostream>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--)
    {
    int p,q,r;
    cin>>p>>q>>r;
    int num,x[101]={0},y[101]={0},z[101]={0};
    for(int i=0;i<p;i++)
        {
        cin>>num;
        x[num]++;
        }
    for(int i=0;i<q;i++)
        {
        cin>>num;
        y[num]++;
        }
    for(int i=0;i<r;i++)
        {
        cin>>num;
        z[num]++;
        }
    int min;
    for(int i=1;i<101;i++)
        {
        if(x[i]==0||y[i]==0||z[i]==0)
            continue;
        min=x[i];
        if(min>y[i])
            min=y[i];
        if(min>z[i])
            min=z[i];
        int j=0;
        while(j<min)
            {
            cout<<i<<" ";
            j++;
            }
        }
    cout<<'\n';
    }

	return 0;
}
