#include<iostream>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--)
    {
    int n=5;
    int a[n][n];
    for(int i=0;i<n;i++)
        {
        for(int j=0;j<n;j++)
            cin>>a[i][j];
        }
    int count=n*n;
    n--;
    int ulx=0,uly=0,urx=0,ury=n,dlx=n,dly=0,drx=n,dry=n;
    int temp=0,i;
    int j=0;
    while(temp!=count)
        {
        for(i=uly;i<=ury;i++)
            {
            cout<<a[ulx][i]<<" ";
            temp++;
            }
        ulx++;
        urx++;
        for(i=urx;i<=drx;i++)
            {
            cout<<a[i][ury]<<" ";
            temp++;
            }
        ury--;
        dry--;
        for(i=dry;i>=dly;i--)
            {
            cout<<a[dlx][i]<<" ";
            temp++;
            }
        dlx--;
        drx--;
        for(i=dlx;i>=ulx;i--)
            {
            cout<<a[i][dly]<<" ";
            temp++;
            }
        dly++;
        uly++;
        }
    cout<<"\n";
    j++;
    }

	return 0;
}
