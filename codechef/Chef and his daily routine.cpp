#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
	{
	string str;
	cin>>str;
	int i=0;
	int min=0,sec,flag=0;
	string s[]={"yes","no"};
	while(str[i]!='\0')
		{
		switch(str[i])
			{
			case 'C':
					sec=1;
					break;
			
			case 'E':
					sec=2;
					break;
			
			case 'S':
					sec=3;
			}
		if(sec-min<0)
			{
			flag=1;
			break;
			}
		min=sec;
		++i;
		}
	cout<<s[flag]<<'\n';
	}
return 0;
}
