#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
	{
	int n;
	cin>>n;
	int a[500]={0};
	a[0]=1;
	int l=1;
	int carry=0,num;
	for(int i=2;i<=n;++i)
		{
		for(int j=0;j<l;++j)
			{
			num=a[j]*i+carry;
			a[j]=num%10;
			carry=num/10;			
			}
		while(carry)
			a[l]=carry%10,++l,carry/=10;
		}
	for(int i=l-1;i>=0;--i)
		cout<<a[i];
	cout<<'\n';
	}
return 0;
}
