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
    int flag=0;
    int l=str.length();
    if(l<2)
    	{
    	if((str[0]-48)%4==0)
    		{
    		flag=1;
			}
		}
	else
		{
		int num=(str[l-2]-48)*10+(str[l-1]-48);
		if(num%4==0)
			flag=1;
		}
	cout<<flag<<'\n';
    }

	return 0;
}
