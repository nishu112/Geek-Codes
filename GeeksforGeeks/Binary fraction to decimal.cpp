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
    int num1=0;
    float num2=0;
    int i=0;
    while(str[i]!='\0')
    	{
    	if(str[i]!='.')
    		{
    		num1=num1*2+(str[i]-48);
			}
		else
			{
			++i;
			break;
			}
		++i;
		}
	int num=1;
	while(str[i]!='\0')
    	{
    	num2+=static_cast<float>(str[i]-48)/(1<<num);
    	++num;
    	++i;
		}
	cout<<num1+num2<<'\n';
    }

	return 0;
}
