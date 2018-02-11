//CodeChef submission 14277840 (C++14) plaintext list. Status: AC, problem KNICOV, contest COOK83. By ACRush (ACRush), 2017-06-18 21:48:45.
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
 
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>
#include <cassert>
#include <string.h>
 
using namespace std;
 
typedef long long int64;
typedef unsigned long long uint64;
#define two(X) (1<<(X))
#define twoL(X) (((int64)(1))<<(X))
#define contain(S,X) (((S)&two(X))!=0)
#define containL(S,X) (((S)&twoL(X))!=0)
const double pi=acos(-1.0);
const double eps=1e-11;
template<class T> inline void ckmin(T &a,T b){if(b<a) a=b;}
template<class T> inline void ckmax(T &a,T b){if(b>a) a=b;}
template<class T> inline T sqr(T x){return x*x;}
typedef pair<int,int> ipair;
#define SIZE(A) ((int)A.size())
#define LENGTH(A) ((int)A.length())
#define MP(A,B) make_pair(A,B)
#define PB(X) push_back(X)
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,a) for(int i=0;i<(a);++i)
#define ALL(A) A.begin(),A.end()
 
const int dx[]={0,-2,-2,-1,-1,1,1,2,2};
const int dy[]={0,-1,1,-2,2,-2,2,-1,1};
 
int n,m;
int a[64][3];
int f[64][3][1<<15];
 
bool is_inside(int x,int y)
{
	return x>=0 && x<n && y>=0 && y<m;
}
int solve(int x,int y)
{
	int state=0;
	for (int dx=-2;dx<=2;dx++) REP(y0,m)
	{
		state*=2;
		int x0=x+dx;
		if (is_inside(x0,y0) && !a[x0][y0]) state++;
	}
	int& ret=f[x][y][state];
	if (ret>=0) return ret;
	if (x==n)
	{
		return state==0?0:10000000;
	}
	ret=10000000;
	REP(b,2)
	{
		if (b) 
		{
			REP(i,9)
			{
				int x2=x+dx[i];
				int y2=y+dy[i];
				if (is_inside(x2,y2)) ++a[x2][y2];
			}
		}
		if (y==m-1)
		{
			bool ok=true;
			if (x-2>=0)
				REP(y0,m) if (!a[x-2][y0]) ok=false;
			if (ok)
				ckmin(ret,solve(x+1,0)+b);
		}
		else
		{
			ckmin(ret,solve(x,y+1)+b);
		}
		if (b) 
		{
			REP(i,9)
			{
				int x2=x+dx[i];
				int y2=y+dy[i];
				if (is_inside(x2,y2)) --a[x2][y2];
			}
		}
	}
	return ret;
}
int main()
{
#ifdef _MSC_VER
	freopen("input.txt","r",stdin);
#endif
	std::ios::sync_with_stdio(false);
	int testcase;
	for (cin>>testcase;testcase>0;testcase--)
	{
		cin>>n>>m;
		if (n<m) swap(n,m);
		memset(a,0,sizeof(a));
		memset(f,255,sizeof(f));
		int ret=solve(0,0);
		printf("%d\n",ret);
	}
	return 0;
}
