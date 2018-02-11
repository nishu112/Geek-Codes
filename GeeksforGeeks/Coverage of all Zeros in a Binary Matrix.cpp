#include<iostream>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--)
    {
    int n,m;
    cin>>n>>m;
    int a[n][m],count=0;
    for(int i=0;i<n;i++)
        {
        for(int j=0;j<m;j++)
            cin>>a[i][j];
        }
    for(int i=0;i<n;i++)
        {
        for(int j=0;j<m;j++)
            {
            if(i>0)
                if(a[i][j]==0 &&a[i-1][j]==1)
                    count++;
            if(j<m-1)
                if(a[i][j]==0 &&a[i][j+1]==1)
                    count++;
            if(i<n-1)
                if(a[i][j]==0 && a[i+1][j]==1)
                    count++;
            if(j>0)
                if(a[i][j]==0 &&a[i][j-1]==1)
                    count++;
            }
        }
    cout<<count<<"\n";
    }

	return 0;
}
