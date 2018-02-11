#include <stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int x(long long int k)
{
    int i,c=0;
    for(i=1;i<=k;i++)
    	if(k%i==0)
    		c++;
    	cout<<"k="<<k<<" "<<"c="<<c<<'\n';
    return c;
}
long long y(long long n)
{
    long long k=2;
    while(k<n)
    {
        if(pow(k,x(k))==n)
        	return k;
        k++;
    }
    return -1;
}


int main()
{
    int t;
    long long n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%ld",&n);
        printf("%ld\n",y(n));
     }
     return 0;
 }
