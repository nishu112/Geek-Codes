#include <bits/stdc++.h>

using namespace std;

int M[10][10];
vector<pair<int,int> > emptyCells;

void fillBoxElements(vector<bool> &unVisit,int i,int j){
	for(int x=3*(i-1)+1;x<=3*i;++x){
		for(int y=3*(j-1)+1;y<=3*j;++y){
			unVisit[M[x][y]]=1;
		}
	}
}

bool solveSudoku(int index){
	if(index==emptyCells.size())	return true;
	vector<bool> unVisit(10,false);
	pair<int,int> coordinate=emptyCells[index];
	for(int i=1;i<=9;++i){
		unVisit[M[coordinate.first][i]]=1;
	}
	for(int i=1;i<=9;++i){
		unVisit[M[i][coordinate.second]]=1;
	}
	int i=ceil(coordinate.first/3.0),j=ceil(coordinate.second/3.0);
	fillBoxElements(unVisit,i,j);
	
	for(int i=1;i<=9;++i){
		if(!unVisit[i]){
			M[coordinate.first][coordinate.second]=i;
			if(solveSudoku(index+1))	return true;
			M[coordinate.first][coordinate.second]=0;
		}
	}
	return false;
	
}

void solve(){
    for(int i=1;i<=9;++i){
    	for(int j=1;j<=9;++j){
    		cin>>M[i][j];
		}
	}
	for(int i=1;i<=9;++i){
    	for(int j=1;j<=9;++j){
    		if(M[i][j]==0){
    			emptyCells.push_back({i,j});
			}
		}
	}
	/*cout<<"\n";
	for(int i=1;i<=9;++i){
    	for(int j=1;j<=9;++j){
    		cout<<M[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";*/
	cout<<"total="<<emptyCells.size()<<"\n";
	solveSudoku(0);

	//cout<<"\n";
	for(int i=1;i<=9;++i){
    	for(int j=1;j<=9;++j){
    		cout<<M[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\n";
}
int main(int argc, char **argv) {
//std::ios::sync_with_stdio(false);
int t;
cin>>t;
while(t--)
	{
	emptyCells.clear();
	solve();
	

	}
return 0;
}
