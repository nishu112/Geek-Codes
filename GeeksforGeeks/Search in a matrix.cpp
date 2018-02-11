#include<iostream>
#include<vector>
using namespace std;
bool find_num(vector<vector<int>> a,int n,int i,int j,int x)
	{
	if(a[i][j]==x)
		return 1;
	else if(a[i][j]<x)
		{
		if(i+1<n)
			return find_num(a,n,i+1,j,x);
		else
			return 0;
		}
	else
		{
		if(j-1>=0)
			return find_num(a,n,i,j-1,x);
		else
			return 0;
		}
	}
int main()
{
int t;
cin>>t;
while(t--)
    {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(n,vector<int>(m));
    for(int i=0;i<n;++i)
    	for(int j=0;j<m;++j)
    		cin>>a[i][j];
    int x;
    cin>>x;
    bool ans;
	ans=find_num(a,n,0,m-1,x);
    cout<<ans<<'\n';
    }

	return 0;
}
