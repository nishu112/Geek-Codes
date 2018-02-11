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
    int l=str.length();
    int count=0,num=0;
    if(l==1)
    	{
    	if((str[0]-48)%4==0)	
    		++count;
		}
	else if(l==2)
		{
		num=(str[0]-48)*10+(str[1]-48);
		if(num%4==0)
			++count;
		}
	else
		{
		int i=0;
		l--;
		while(i<l)
			{
			num=(str[i]-48)*10+(str[i+1]-48);
			if(num%4==0)
				++count;
			++i;
			}
		num=(str[l]-48)*10+(str[0]-48);
		if(num%4==0)
				++count;
		}
	cout<<count<<'\n';
	}
	return 0;
}
