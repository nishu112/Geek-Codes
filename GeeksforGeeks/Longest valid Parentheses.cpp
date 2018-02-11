#include<iostream>
//Wrong
#include<stack>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    string str;
    cin>>str;
    stack<char> st;
    int i=0,m=0,count=0,level=0;
    while(str[i]!='\0')
    	{
    	if(str[i]=='(')
    		st.push(str[i]);
		else if(str[i]==')' && (!st.empty()))
			{
			count+=2;
			st.pop();
			}
		else
			count=0;
		m=max(m,count);
		++i;
		}
	cout<<m<<'\n';
    }

	return 0;
}
