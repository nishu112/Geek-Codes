//INCOMPLETE
#include<iostream>
#include<vector>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    int R,C;
    cin>>R>>C;
    vector<vector<int>> v(R,vector<int>(C));
    for(int i=0;i<R;i++)
    	for(int j=0;j<C;j++)
    		cin>>v[i][j];
    for(int i=0;i<R;i++)
    	{
		for(int j=0;j<C;j++)
			cout<<v[i][j]<<" ";
		cout<<"\n";
		}	
    }

	return 0;
}
