#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
	{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;++i)
		{
		for(int j=0;j<m;++j)
			{
			if(i==0||i==n-1||j==0||j==m-1)
				cout<<"*";
			else
				cout<<".";
			}
		cout<<'\n';
		}
	cout<<'\n';
	}
	return 0;
}
