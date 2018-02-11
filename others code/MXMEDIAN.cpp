/*
  Beautiful Codes are MUCH better than 'Shorter' ones !
user  : triveni
date  : 05/05/2017
time  : 15:23:54
*/
#include <bits/stdc++.h>
 
using namespace std;
 
#define      pii               std::pair<int,int>
#define      vi                std::vector<int>
#define      mp(a,b)           make_pair(a,b)
#define      pb(a)             push_back(a)
#define      each(it,s)        for(auto it = s.begin(); it != s.end(); ++it)
#define      rep(i, n)         for(int i = 0; i < (n); ++i)
#define      fill(a)           memset(a, 0, sizeof (a))
#define      sortA(v)          sort(v.begin(), v.end())
#define      sortD(v)          sort(v.begin(), v.end(), greater<auto>())
#define      X                 first
#define      Y                 second
 
typedef long long ll;
ll mod = 1000000007;
 
int main()
{
	int T;
	cin >> T;
	while(T--) {
		int n;
		cin >> n;
		vector<int> v(2*n);
		rep(i, 2*n) cin >> v[i];
		sort(v.begin(), v.end());
		vector<int> ans(2*n);
		for (int i = 0, j = 2*n-1; i < n; ++i, --j) {
			ans[(n-1-i)*2] = v[i];
			ans[(n-1-i)*2+1] = v[j];
		}
		cout << v[n + n/2] << "\n";
		rep(i, 2*n) printf("%d ",ans[i]);
		putchar(10);
	}
	return 0;
}
 
