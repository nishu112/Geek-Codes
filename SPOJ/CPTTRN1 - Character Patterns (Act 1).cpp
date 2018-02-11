#include <iostream>
using namespace std;

int main() 
{
int t;
cin>>t;
while(t--)
	{
	int n,m;
	cin>>n>>m;
	string str=".*";
	int k=1;
	for(int i=0;i<n;++i)
		{
		k=(i&1);
		for(int j=0;j<m;++j)
			{
			k=k^1;
			cout<<str[k];
			}
		cout<<'\n';
		}
	cout<<'\n';
	}
	
	return 0;
}
