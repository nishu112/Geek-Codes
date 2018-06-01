#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int x;
	while(t--){
		cin>>x;
		if(x%10==0)
			{
			cout<<"0\n";
			}
		else if(x%5==0)
			cout<<"1\n";
		else
			cout<<"-1\n";
	}
	return 0;
}
