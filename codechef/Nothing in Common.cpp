#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
	{
	int n,m;
	cin>>n>>m;
	int num;
	unordered_set<int> myset;
	for(int i=1;i<=n;++i)
		{
		cin>>num;
		myset.insert(num);
		}
	int count=0;
	for(int i=1;i<=m;++i)
		{
		cin>>num;
		if(myset.find(num)!=myset.end())
			++count;
		}
	cout<<count<<'\n';
	}
return 0;
}
