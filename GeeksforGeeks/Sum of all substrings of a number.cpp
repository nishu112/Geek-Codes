#include<iostream>
#include<string>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    string str;
    cin>>str;
    int l=str.length();
    int i=0,num=0;
    while(str[i]!='\0')
    	{
    	int j=i;
    	int mynum=0;
    	while(str[j]!='\0')
    		{
    		mynum=mynum*10+(str[j]-48);
    		num+=mynum;
    		j++;
			}
		i++;
		}
	cout<<num<<'\n';
    }

	return 0;
}
