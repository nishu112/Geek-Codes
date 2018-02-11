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
    int i=0,j;
    int count=0;
    while(str[i]!='\0')
    	{
    	++count;
    	j=i+1;
    	while(str[j]!='\0')
    		if(str[j++]==str[i])
    			++count;
    	++i;
		}
	cout<<count<<'\n';
    }

	return 0;
}
