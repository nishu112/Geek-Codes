#include<iostream>
using namespace std;
int main()
{
string str;
cin>>str;
int l=str.length()-1,count=0;
char ch;
while(l>=0 && str[l]=='0')
	{
	--l;
	}
if(l>=0)
do
	{
	if(str[l]=='0')
		++count,ch=str[l];
	else
		++count,ch=str[l];
	while(l>=0 && str[l]==ch)
		{
		--l;
		}
	}while(l>=0);
cout<<count<<'\n';
return 0;
}
