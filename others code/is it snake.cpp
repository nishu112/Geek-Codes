#include <algorithm>
#include <bitset>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
 
#ifdef PRINTERS
#include "printers.hpp"
using namespace printers;
#define tr(a)		cerr<<#a<<" : "<<a<<endl;
#else
#define tr(a)    
#endif
 
#define ll          long long
#define pb          push_back
#define mp          make_pair
#define pii         pair<int,int>
#define vi          vector<int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (int)x.size()
#define hell        1000000007
#define endl        '\n'
#define rep(i,a,b)	for(int i=a;i<b;i++)
using namespace std;
 
void solve(){
	int n;
	cin>>n;
	string a[2];
	cin>>a[0]>>a[1];
	deque<int>dq;
	rep(i,0,n){
		int curval=(2*(a[0][i]=='#')+(a[1][i]=='#'));
		dq.pb(curval);
	}
	while(!dq.empty() and dq.back()==0)dq.pop_back();
	while(!dq.empty() and dq.front()==0)dq.pop_front();
	vector<int>x(all(dq));
	vector<pii>rem;
	rep(i,0,sz(x)){
		if(x[i]==0){
			cout<<"no\n";
			return;
		}
		else if(x[i]==1 or x[i]==2){
			rem.pb(mp(i,x[i]));
		}
	}
	rep(i,1,sz(rem)){
		if((rem[i].S==rem[i-1].S)^((rem[i].F-rem[i-1].F)%2)){
			cout<<"no\n";
			return;
		}
	}
	cout<<"yes\n";
 
}
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t=1;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
} 
