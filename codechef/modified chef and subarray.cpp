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
int j=0,i=0,max_val=0,val_j;
while(str[i])
	{
	if(str[i]=='!')
		++j;
	else
		{
		if(j!=0 && val_j==j )
			{
			cout<<max_val<<'\n';
			continue;
			}
		val_j=j;
		int count=0,m=0,z;
		for(z=0;z<k;++z)
			{
			if(a[(n-j+z)%n]==1)
				{
				++count;
				m=max(m,count);
				}
			else
				count=0;
			}
		while(z<n)
			{
			if(a[(n-j+z)%n]==1 )
				{
				++count;
				m=max(m,count%k);
				}
			else
				{
				count=0;
				}
			++z;
			}
		max_val=m;
		cout<<m<<'\n';
		}
	++i;
	}
	return 0;
}
