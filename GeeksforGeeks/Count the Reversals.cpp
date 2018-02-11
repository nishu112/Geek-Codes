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
    if(str.length()%2==1)
    	{
    	cout<<-1<<'\n';
    	continue;
		}
	stack<char> st;
	int i=0;
	while(str[i]!='\0')
		{
		if(st.empty())
			{
			st.push(str[i]);
			}
		else 
			{
			if(str[i]=='}' && st.top()=='{')
				st.pop();
			else
				st.push(str[i]);
			}
		i++;
		}
	int count1=0,count2=0;
	while(!st.empty())
		{
		if(st.top()=='{')	
			count1++;
		else
			count2++;
		st.pop();
		}
	int res;
	res=count1/2 + count2/2 +count1%2 + count2%2;
	cout<<res<<'\n';
    }
	return 0;
}
