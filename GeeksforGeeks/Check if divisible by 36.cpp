#include<iostream>
using namespace std;
bool checkdiv4(string str)
	{
	int l=str.length();
	if(l==1)
		return ((str[l-1]-48)%4==0);
	else
		return (((str[l-2]-48)*10+str[l-1])%4==0);
	}
bool checkdiv9(string str)
	{
	int count=0,i=0;
	while(str[i]!='\0')
		{
		count+=(str[i]-48);
		++i;
		}
	return (count%9==0);
	}
int main()
{
int t;
cin>>t;
while(t--)
    {
    string str;
    cin>>str;
    if(checkdiv4(str) && checkdiv9(str))
    	cout<<"1\n";
    else
    	cout<<"0\n";
    }

	return 0;
}
