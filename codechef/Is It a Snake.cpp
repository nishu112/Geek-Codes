#include<iostream>
#include<vector>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
	{
	int n;
	cin>>n;
	vector<string> str(2);
	cin>>str[0]>>str[1];
	bool visit[2][n];
	fill(&visit[0][0],&visit[0][0]+sizeof(visit),false);
	int i=0,j=0;
		for(j=0;j<n;++j)
			if(str[0][j]=='#')
				{
				i=0;
				goto last;	
				}
			else if(str[1][j]=='#')
				{
				i=1;
				goto last;
				}
	last:
	int x=i,y=j,myval=0;
	for(i=0;i<2;++i)
		{
		for(j=0;j<2;++j)
			{
			if(i-1>=0 && str[i-1][j]=='#' && visit[i-1][j]==false)
				myval=0;
			else if(i+1<2 && str[i+1][j]=='#' && visit[i+1][j]==false)
			myval=0;
			else if(j+1<n && str[i][j+1]=='#' && visit[i][j+1]==false)
			myval=0;
			else if(j-1>=0 && str[i][j-1]=='#' && visit[i][j-1]==false)
			myval=0;
			else myval=1;
			}
		if(myval)
			break;
		}
	int flag=0;
	if(i!=x && j!=y)
		flag =1;
	string ans[2]={"yes","no"};
	cout<<ans[flag]<<'\n';
	}
return 0;
}
