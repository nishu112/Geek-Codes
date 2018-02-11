#include<iostream>
using namespace std;
int min(int a,int b)
	{
	return a>b?b:a;
	}
int main()
{
int t;
cin>>t;
while(t--)
    {
	int n;
	cin>>n;
	int m=2*n-1,n1,n2;
	int minimum;
	for(int i=0;i<m;i++)
		{
		for(int j=0;j<m;j++)
			{
			if(i>n-1)
				n1=m-i-1;
			else
				n1=i;
			if(j>n-1)
				n2=m-j-1;
			else
				n2=j;
			minimum=min(n1,n2);
			cout<<(n-minimum);					
			}
		cout<<"\n";
		}
	cout<<"\n";
    }
	return 0;
}
