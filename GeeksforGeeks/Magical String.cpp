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
    while(str[i]!='\0')
    	{
    	str[i]=25+2*'a'-str[i];
    	++i;
		}
	cout<<str<<'\n';
    }

	return 0;
}
