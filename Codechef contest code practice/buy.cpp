#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
cin>>str;
stringstream ss(str);
string temp;
vector<int> Arr;
while(getline(ss,temp,','))	Arr.push_back(stoi(temp));
vector<int> V(Arr.size(),0);
V[Arr.size()-1]=Arr[Arr.size()-1];
for(int i=Arr.size()-2;i>=0;--i)	V[i]=max(V[i+1],Arr[i]);
int buy=0,sell=0;
int Max=INT_MIN;
for(int i=1;i<Arr.size();++i){
	if(Max<V[i]-Arr[i-1]){
		Max=V[i]-Arr[i-1];
		buy=Arr[i-1];
		sell=V[i];		
	}
}
cout<<buy<<","<<sell;
	return 0;
}
