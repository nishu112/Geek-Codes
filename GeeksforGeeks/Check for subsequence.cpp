#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    string str1,str2;
    cin>>str1>>str2;
    int i=0,j=0;
    int flag=0;
    while(str1[i]!='\0')
    	{
    	flag=0;
    	while(str2[j]!='\0')
    		{
    		if(str1[i]==str2[j])
    			{
    			flag=1;
    			break;
				}
			++j;
			}
		if(flag==0 || j==str2.length())
			{
			break;
			}
		++i;
		}
	if(!flag)
		cout<<0<<'\n';
	else
		cout<<1<<'\n';
    }

	return 0;
}
