#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<int> st;
	int i=0;
	int n;
	cin>>n;
	while(i<n)
		{
		int num;
		cin>>num;
		st.push(num);
		++i;
		}
	while(!st.empty())
		{
		cout<<st.top()<<" ";
		st.pop();
		}
	return 0;
}
