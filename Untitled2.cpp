#include<bits/stdc++.h>
using namespace std;
 
int xor2(int a[],int n)
{
    int i,j,k=0;
    int len=0;
    len=n*n;
    int res[len];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            res[k]=a[i]+a[j];
            k++;
        }
    }
    int sum=res[0];
    for(k=0;k<len-1;k++)
            {
             sum^=res[k+1]; 
            }
    return sum;
}

int main()
{   
int t=0;
cin>>t;
while(t--)
{
int n=0,i,x=0;
cin>>n;
int a[n];
for(i=0;i<n;i++)
{
    cin>>a[i];
}
    x=xor2(a,n);
    cout<<x;
}
}
