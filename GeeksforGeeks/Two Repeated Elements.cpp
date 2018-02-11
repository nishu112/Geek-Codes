#include<iostream>
#include<unordered_set>
#include<algorithm>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
	{
	int n;
	cin>>n;
	int num;
	unordered_set<int> myset;
	for(int i=0;i<n+2;++i)
		{
		cin>>num;
		if(myset.find(num)==myset.end())
			myset.insert(num);
		myset.erase(num);			
		}
	int ans[2],loc=0;
	for(unordered_set<int> ::iterator itr=myset.begin();itr!=myset.end();++itr)
		{
		ans[loc++]=*itr;
		}
	sort(ans,ans+2);
	for(int i=0;i<2;++i)
		cout<<ans[i]<<" ";
	cout<<'\n';
	}
	return 0;
}
