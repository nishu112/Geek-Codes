#include<iostream>
using namespace std;
int main()
{
int n,k,p;
cin>>n>>k>>p;
int a[n];
for(int i=0;i<n;++i)
	cin>>a[i];
string str;
cin>>str;
int j=0,i=0;
while(str[i])
	{
	if(str[i]=='!')
		++j;
	else
		{
		int count=0,m=0,z,loc1=0,loc2=0,x=INT_MAX,y=INT_MAX;
		int flag=0;
		for(z=0;z<k;++z)
			{
			if(a[(n-j+z)%n]==1)
				{
				++count;
				if(flag==0)
					{
					flag=1;
					loc1=z,loc2=z;
					}
				else
					++loc2;
				if(m<=count)
					{
					m=count;
					x=loc1,y=loc2;
					}
				}
			else
				count=0,flag=0;
			}
		int inc=0;
		count=m;
		loc1=x,loc2=y;
		while(z<n)
			{
			if(x!=INT_MAX && inc>=x&& inc<=y)
				{
				--count;
				++x;
				}
			if(flag==1)
				{
				if(a[(n-j+z)%n]==1)
					++count,++loc2;
				else
					flag=0,count=0;
				if(m<=count)
					{
					m=count;
					x=loc1,y=loc2;
					}
				}
			else
				{
				if(a[i]==1)
					{
					flag=1;
					loc1=z,loc2=z;
					++count;
					}		
				}
			++inc;
			++z;
			}
		cout<<m<<'\n';
		}
	++i;
	}
	return 0;
}
