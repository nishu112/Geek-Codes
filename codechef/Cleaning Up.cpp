#include<iostream>
#include<vector>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
	{
	int n,m;
	cin>>n>>m;
	int arr[n+1]={0};
	for(int i=0;i<m;++i)
		{
		int temp;
		cin>>temp;
		arr[temp]=1;
		}
	vector<int> a,b;
	int check=1;
	for(int i=1;i<=n;++i)
		{
		if(!arr[i])
			if(check)
				{
				a.push_back(i);
				check=0;
				}
			else
				{
				check=1;
				b.push_back(i);
				}
		}
	for(vector<int> :: iterator itr=a.begin();itr!=a.end();++itr)
		cout<<*itr<<" ";
	cout<<'\n';
	for(vector<int> :: iterator itr=b.begin();itr!=b.end();++itr)
		cout<<*itr<<" ";
	cout<<'\n';
	}
	return 0;
}
