#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    int n;
    cin>>n;
    string str;
    cin>>str;
    int i=0,hash[26]={0};
    int count=0;
    while(str[i]!='\0')
    	{
    	++hash[str[i]-97];
    	++i;
		}
	i=0;
	while(i<26)
		{
		if(hash[i])
			{
			count+=(hash[i]*(hash[i]+1))/2;
			}
		++i;
		}
	cout<<count<<'\n';
    }

	return 0;
}
