#include <bits/stdc++.h>

using namespace std;
void show(vector<vector<int> > test){
	for(int j=0;j<test.size();++j)
		{
		
	for(int i=0;i<test[j].size();++i)	cout<<test[j][i]<<" ";
	cout<<'\n';
}
}
int main()
{
vector<vector<int> > Main(1,vector<int>(2));
Main[0][1]=2;
Main[0][0]=1;
show(Main);
return 0;
}


