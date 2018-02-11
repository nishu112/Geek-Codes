#include "bits/stdc++.h"
using namespace std;
const int N = 3;
const int M = 52;
const int inf = 1e6 + 6;
int t;
int n , m;
int dp[N + 1][M][1 << N][1 << N][1 << N][1 << N];
int mx;
inline void put(int &mask , int bit){
	if(bit >= 0 && bit < n){
		mask |= 1 << bit;
	}
}
int solve(int pos , int next1 , int cur , int prev1 , int prev2){
	if(pos < 1){
		return ((prev1 == mx) && (prev2 == mx)) ? 0 : inf;
	}
	if(dp[n][pos][next1][cur][prev1][prev2] != -1){
		return dp[n][pos][next1][cur][prev1][prev2];
	}
	int res = inf;
	for(int i = 0 ; i <= mx ; ++i){
		int arr[5] = {0 , next1 , cur , prev1 , prev2};
		int tot = 0;
		for(int j = 0 ; j < n ; ++j){
			if((i >> j) & 1){
				put(arr[2] , j);
				put(arr[3] , j - 2);
				put(arr[3] , j + 2);
				put(arr[4] , j - 1);
				put(arr[4] , j + 1);
				put(arr[1] , j - 2);
				put(arr[1] , j + 2);
				put(arr[0] , j - 1);
				put(arr[0] , j + 1);
				++tot;
			}
		}
		if(arr[4] == mx){
			res = min(res , tot + solve(pos - 1 , arr[0] , arr[1] , arr[2] , arr[3]));
		}
	}
	return dp[n][pos][next1][cur][prev1][prev2] = res;
}
int main(){
	memset(dp , -1 , sizeof(dp));
	cin >> t;
	while(t--){
		cin >> n >> m;
		if(m == 1){
			cout << n << endl;
			continue;
		}
		mx = (1 << n) - 1;
		cout << solve(m , 0 , 0 , mx , mx) << endl;
	}
} 
Comments 

