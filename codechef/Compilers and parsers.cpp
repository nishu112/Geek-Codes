#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		stack<char> s;
		cin>>str;
		long int l=0,i;
		int count=0,ans=0;
		for(i=0;i<str.length();i++)
		{
		if(str[i]=='<')		++count;
		else	--count;
		if(!count)	ans=i+1;
		if(count<0)	break;
		}
	cout<<ans<<'\n';
	}
	return 0;
}
