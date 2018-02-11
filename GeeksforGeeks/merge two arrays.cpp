#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
int a[n],b[m];
int k=n+m;
int c[k];
for(int i=0;i<n;i++)
	cin>>a[i];
for(int i=0;i<m;i++)
	cin>>b[i];
sort(a,a+n);
sort(b,b+m);
int x=0,y=0;
int i=0;
while(x<n && y<m)
    if(a[x]<=b[y])
		c[i++]=a[x++];
	else
		c[i++]=b[y++];		
while(x<n)
	c[i++]=a[x++];
while(y<m)
	c[i++]=b[y++];
for(int i=0;i<k;i++)
	cout<<c[i]<<" ";
return 0;
}
