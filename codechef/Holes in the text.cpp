#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int n;
cin>>n;
while(n--)
	{
	string str;
	cin>>str;
	int i=0,count=0;
	while(str[i])
		{
		if(str[i]=='B')
			count+=2;
		if(str[i]=='A' || str[i]=='D' || str[i]=='O' || str[i]=='P' || str[i]=='Q' || str[i]=='R')
			++count;
		++i;
		}
	cout<<count<<'\n';
	}
	return 0;
}
