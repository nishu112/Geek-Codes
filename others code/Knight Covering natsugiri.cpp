#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<string.h>
using namespace std;
 
typedef long long LL;
typedef vector<int> VI;
 
#define REP(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define EACH(i,c) for(__typeof((c).begin()) i=(c).begin(),i##_end=(c).end();i!=i##_end;++i)
#define eprintf(...) fprintf(stderr, __VA_ARGS__)
 
template<class T> inline void amin(T &x, const T &y) { if (y<x) x=y; }
template<class T> inline void amax(T &x, const T &y) { if (x<y) x=y; }
template<class Iter> void rprintf(const char *fmt, Iter begin, Iter end) {
    for (bool sp=0; begin!=end; ++begin) { if (sp) putchar(' '); else sp = true; printf(fmt, *begin); }
    putchar('\n');
}
 
 
 
const int dy[] = { 1, 2, 2, 1, -1, -2, -2, -1 };
const int dx[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
 
int N, M;
 
int bits(int n) { return (1<<n)-1; }
int dp[55][1<<12];
 
 
void MAIN() {
    scanf("%d%d", &N, &M);
    if (M < N) swap(N, M);
    if (N == 1) {
	printf("%d\n", M);
    } else if (N == 2) {
	int r = M % 6;
	printf("%d\n", M / 6 * 4 + min(4, r * 2));
    } else {
	memset(dp, 0x3f, sizeof dp);
	dp[0][(1<<6)-1] = 0;
	REP (i, M) REP (s, 1<<12) if (dp[i][s] <= 3*M) {
		
		cout<<"val="<<i<<" "<<s<<"\n";
	    REP (t, 1<<3) {
		int ns = s;
		int c = 0;
		if (t & 1) { ns |= 2; ns |= 32; ns |= 64; c++; }
		if (t & 2) { ns |= 1; ns |= 4; ns |= 128; c++; }
		if (t & 4) { ns |= 2; ns |= 8; ns |= 256; c++; }
 
		if ((ns & 7) != 7) continue;
		ns >>= 3;
		if (t & 1) { ns |= 256; ns |= 1024; }
		if (t & 2) { ns |= 512; ns |= 2048; }
		if (t & 4) { ns |= 64; ns |= 1024; }
 
		amin(dp[i+1][ns], dp[i][s] + c);
	    }
	}
 
	int ans = N * M;
	REP (s, 1<<12) if ((s & bits(6)) == bits(6)) amin(ans, dp[M][s]);
	printf("%d\n", ans);
    }
}
 
int main() {
    int TC = 1;
    scanf("%d", &TC);
    REP (tc, TC) MAIN();
    return 0;
}
 
