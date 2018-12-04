#include <iostream>
#include <cstdio>
#include <string>
#include <sstream> 
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <ctime>
using namespace std;
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define SZ(x) ((int)(x.size()))
#define fi first
#define se second
#define FOR(i,n) for(int (i)=0;(i)<(n);++(i))
#define FORI(i,n) for(int (i)=1;(i)<=(n);++(i))
#define IN(x,y) ((y).find((x))!=(y).end())
#define ALL(t) t.begin(),t.end()
#define FOREACH(i,t) for (typeof(t.begin()) i=t.begin(); i!=t.end(); i++)
#define REP(i,a,b) for(int (i)=(a);(i)<=(b);++i)
#define REPD(i,a,b) for(int (i)=(a); (i)>=(b);--i)
#define REMAX(a,b) (a)=max((a),(b));
#define REMIN(a,b) (a)=min((a),(b));
#define DBG cerr << "debug here" << endl;
#define DBGV(vari) cerr << #vari<< " = "<< (vari) <<endl;
 
typedef long long ll;
 
const int MAXK = 8;
const int MAXN = 21;
 
ll a[MAXN];
bool dp[MAXK + 1][1LL << MAXN];
int n, k;
 
bool solve()
{
    ll sum = 0;
    FOR(i, n) sum += a[i];
    if((sum % k != 0) || (n < k)) return 0;
    if(sum == 0) return 1;
    ll x = sum / k;
    ll maxBit = (1LL << n);
    REP(i, 0, k) FOR(j, maxBit) dp[i][j] = 0;
    dp[0][0] = 1;
    FOR(i, k)
    {
        for(ll mask = 0; mask < maxBit; ++mask)
        {
            if(!dp[i][mask]) continue;
            sum = 0;
            FOR(j, n) sum += ((mask & (1LL << j)) > 0) * a[j];
            sum -= i * x;
            FOR(j, n)
            {
                if(mask & (1LL << j)) continue;
                ll new_mask = mask | (1LL << j);
                if(sum + a[j] == x)
                {
                    dp[i + 1][new_mask] = 1;
                }
                else if(sum + a[j] < x)
                {
                    dp[i][new_mask] = 1;
                }
            }
            cout<<"i="<<i<<" mask="<<mask<<'\n';
            FOR(y, k+1)
    {
        for(ll mask = 0; mask < maxBit; ++mask)
        cout<<dp[y][mask]<<" ";
        cout<<'\n';
        
        
    }
    cout<<'\n';
        cout<<'\n';
        }
    }
    
    


    return dp[k][maxBit - 1];
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        FOR(i, n) cin >> a[i]; 
        bool res = solve();   
        cout << (res ? "yes" : "no") << endl;
    }
    return 0;
}
