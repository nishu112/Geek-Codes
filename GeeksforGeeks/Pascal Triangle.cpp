#include<iostream>
using namespace std;
long long int fact(long long int n)
    {
    if(n==0 || n==1)
        return 1;
    return n*fact(n-1);
    }
int main()
 {
int t;
cin>>t;
while(t--)
    {
    int n;
    cin>>n;
    n--;
    long long int num=0;
    int min,max;
    for(int k=0;k<=n;k++)
    	{for(int z=0;z<n-k;z++)
    		cout<<"  ";
    	for(int i=0;i<=k;i++)
        	{
        	num=1;
        	min=i;
        	max=i;
        	if(k-i>i)
            	max=k-i;
        	else
            	min=k-i;
        	for(int j=max+1;j<=k;j++)
            	{
            	num*=j;
           	 	}
        	cout<<num/fact(min)<<"  ";
        	}
    	cout<<'\n';
    	}
	}
	return 0;
}
