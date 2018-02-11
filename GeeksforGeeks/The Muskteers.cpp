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
    int flag=0;
    while(str[i]!='\0')
    	{
    	if(str[i]=='0')
    		{
    		++flag;
    		if(flag==2)
    			break;
    		while(str[i]=='0')
    			{
				++i;
				}
			}
    	++i;
		}
	if(flag==1)
		cout<<"YES\n";
	else
		cout<<"NO\n";
    }

	return 0;
}
