#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
int t;
cin>>t;
for(int k=1;k<=t;++k)
	{
	cout<<"Case #"<<k<<":";
	int n,p;
	cin>>n>>p;
	int a[n],count;
	for(int i=0;i<n;++i)
		cin>>a[i];
	int arr[n][p],num=0;
	for(int i=0;i<n;++i )
		{
		for(int j=0;j<p;++j)
			cin>>arr[i][j];
		}
	int l=0;
	count=0;
	for(int i=0;i<p;++i)
		{
		num=floor(arr[0][i]*1.0/a[0])+1;
		cout<<"num="<<num<<'\n';
		int flag=1;
		float cal=100*arr[0][i]/(num*a[0]*1.0);
		cout<<"cal%="<<cal<<'\n';
		if(cal>=90 && cal<=110)
			{
			}
		else
			{
			if(num!=1)
			num--;
			}
		cout<<"newnum="<<num<<'\n';
		for(int j=0;j<n;++j)
			{
			float val=100*arr[j][i]/(num*a[j]*1.0);
			cout<<"arr="<<arr[j][i]<<" a="<<a[j]<<'\n';
			cout<<fixed;
			cout<<setprecision(4);
			if(val>=90 &&  val<=110)
				{
				//cout<<"yes" ;
				}
			else
				{
				cout<<"val %="<<val<<'\n';
				flag=0;
				//break;
				}
			}
		l++;
		if(flag)
			++count;
		}
	cout<<"count="<<count<<'\n';
	
	}
	return 0;
}
