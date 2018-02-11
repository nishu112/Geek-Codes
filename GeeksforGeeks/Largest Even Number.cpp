#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    string str;
    cin>>str;
    sort(str.begin(),str.end(),greater<char>());
    int i=str.length()-1;
    while(i!=-1 && str[i]%2!=0)
        {
        i--;
        }
    if(i==-1 || i==str.length()-1)
        cout<<str;
    else
        {
        char ch=str[i],temp=str[str.length()-1];
        while(str[i+1]!='\0')
        	{
        	str[i]=str[i+1];
        	i++;
			}
		str[str.length()-1]=ch;
		cout<<str;
        }
    cout<<'\n';
    }

	return 0;
}
