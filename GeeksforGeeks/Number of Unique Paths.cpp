#include<iostream>
using namespace std;
int pathfind(int x,int y)
	{
	if(x==1 || y==1)
		return 1;
	return pathfind(x-1,y)+pathfind(x,y-1);
	}
int main()
{
int t;
cin>>t;
while(t--)
    {
    int x,y;
    cin>>x>>y;
    int res=pathfind(x,y);
    cout<<res<<'\n';
    }
	return 0;
}
