#include<iostream>
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
	int i=0,flag=0;;
	while(str[i]!='\0')
		{
		if(st.empty())
			{
			if(str[i]=='}' || str[i]==')' || str[i]==']' )
				{
				flag=1;
				break;
				}
			st.push(str[i]);
			}
		else
			{
			if(str[i]=='}')
				{
				if(st.top()=='{')
					st.pop();
				else
					{
					flag=1;
					break;
					}				
				}
			else if(str[i]==')')
				{
				if(st.top()=='(')
					st.pop();
				else
					{
					flag=1;
					break;
					}
				}
			else if(str[i]==']')
				{
				if(st.top()=='[')
					st.pop();
				else
					{
					flag=1;
					break;
					}
				}
			else
				st.push(str[i]);
			}
		i++;
		}
	if(!st.empty())
		{
		flag=1;
		}		
	if(flag)
		cout<<"not balanced\n";
	else
		cout<<"balanced\n";
	}
	return 0;
}
