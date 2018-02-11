#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
	{
	int n;
	cin>>n;
	int a=1,b=1,temp;	
	if(n==1)
		{
		cout<<9<<"\n";
		continue;
		}
	while(log(a)/log(10)<2*n+1)
		{
		if(log(a)/log(10)>n)
			{
			for(int i=2;i<=a;i++)
				{
				if(a%i==0)
					{
					cout<<a<<"\n";
					//goto last;
					}
				}
			}
		cout<<"a="<<a<<"\n";
		temp=a+b;
		a=b;
		b=temp;
		}
	//last: ;
	}	
	return 0;
}
