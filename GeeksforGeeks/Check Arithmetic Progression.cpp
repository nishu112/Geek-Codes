#include <bits/stdc++.h>

using namespace std;

#define		 sc(x)			   scanf("%d",&x)
#define      rep(i, n)         for(int i = 0; i < (n); ++i)


int main(int argc, char **argv) {
priority_queue<int> pq;
string ans[]={"YES\n","NO\n"};
int t;
sc(t);
while(t--)
	{
	int n;
	sc(n);
	int num;
	rep(i,n)	{sc(num); pq.push(num); }	
	if(pq.size()<=2)
		{
		cout<<ans[0];
		continue;
		}
	int num1,num2,diff,temp_diff;
	num1=pq.top();
	pq.pop();
	num2=pq.top();
	pq.pop();
	diff=num2-num1;
	bool flag=0;
	while(!pq.empty())
		{
		num1=num2;
		num2=pq.top();
		pq.pop();
		temp_diff=num2-num1;
		if(temp_diff!=diff)
			{
			flag=1;
			break;
			}
		}
	cout<<ans[flag];	
	}
return 0;
}
