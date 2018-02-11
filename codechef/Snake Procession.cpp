#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
	{
	int l;
	cin>>l;
	string str;
	cin>>str;
	int i=0,flag=1;
	string ans[]={"Invalid","Valid"};
	while(str[i]!='\0')
		{
		if(str[i]!='.')
			{
			if(str[i]=='H' && flag==1)
				flag=2;
			else if(str[i]=='T' && flag==2)
				flag=1;
			else
				{
				flag=2;
				break;
				}
			}
		++i;		
		}
	cout<<ans[(flag&1)]<<'\n';
	}
	return 0;
}
