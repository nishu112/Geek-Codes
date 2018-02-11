#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
#include <deque>
#include <assert.h>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <stdio.h>
#include <string.h>
#include <utility>
#include <math.h>
#include <bitset>
#include <iomanip>
#include <complex>
 
using namespace std;
 
#define rep(i, a, b) for (int i = (a), i##_end_ = (b); i < i##_end_; ++i)
#define debug(...) fprintf(stderr, __VA_ARGS__)
#define mp make_pair
#define x first
#define y second
#define pb push_back
#define SZ(x) (int((x).size()))
#define ALL(x) (x).begin(), (x).end()
 
template<typename T> inline bool chkmin(T &a, const T &b) { return a > b ? a = b, 1 : 0; }
template<typename T> inline bool chkmax(T &a, const T &b) { return a < b ? a = b, 1 : 0; }
template<typename T> inline bool smin(T &a, const T &b)   { return a > b ? a = b : a;    }
template<typename T> inline bool smax(T &a, const T &b)   { return a < b ? a = b : a;    }
 
typedef long long LL;
#define int long long
const int N = (int) 1e6 + 6, mod = (int) 0;
int last[N], sum[N], a[N];
int32_t main() {
	ios_base::sync_with_stdio(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		for (int j = 0; j < n; ++j)
			cin >> a[j], last[j] = -1;
		for (int j = 0; j < n; ++j)
			cin >> sum[j + 1], sum[j + 1] += sum[j];
		int res = 0, pt = 0;
		for (int j = 0; j < n; ++j) {
			while (last[a[j]] >= pt) ++pt;
			last[a[j]] = j;
			res = max(res, sum[j + 1] - sum[pt]);
		}
		cout << res << '\n';
	}
}
 
