/*
  Beautiful Codes are MUCH better than 'Shorter' ones !
user  : triveni
date  : 08/05/2017
time  : 04:44:32
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
	int n, k, p;
	cin >> n >> k >> p;
	vector<int> v(n);
	rep(i, n) cin >> v[i];
	if(k >= n) {
		string s; cin >> s;
		int ans = count(v.begin(), v.end(), 1);
		for (char c : s) if(c == '?') cout << ans << "\n";
		return 0;
	}
	multiset<int, greater<int>> st;
	int c = 0;
	for (int i = 0; i < k; ++i) {
		c += v[i];
	}
	st.insert(c);
	int c1 = c;
	for (int i = k; i < n; ++i) {
		c += v[i];
		c -= v[i-k];
		st.insert(c);
	}
	vector<int> ans(n);
	ans[0] = *st.begin();
	for (int i = 1; i < n; ++i) {
		c1 += v[n-i];
		c1 -= v[(n-i+k)%n];
		st.insert(c1);
		st.erase(st.find(c));
		ans[i] = *st.begin();
		c += v[(n-k-i+n)%n];
		c -= v[n-i];
	}
	int r = 0;
	string qq; cin >> qq;
	for (char c : qq) {
		if(c == '?') cout << ans[r] << "\n";
		else r = (r + 1) % n;
	}
	return 0;
}
