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
    int count=0;
    while(str[i]!='\0')
    	{
    	if(str[i]=='1' || str[i]=='2')
    		{
    		count++;
			}
    	++i;
		}
	int flag=0;
	string str1=to_string(count);
	//cout<<str1;
	i=0;
	while(str1[i]!='\0')
		{
		if(str1[i]=='1' || str1[i]=='2')
			{
				
			}
		else
			{
			flag=1;
			break;
			}
		++i;
		}
	if(flag)
		cout<<"NO\n";
	else
		cout<<"YES\n";
    }

	return 0;
}
