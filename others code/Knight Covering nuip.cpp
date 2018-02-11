#include <string>
#include <vector>
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<stack>
#include<queue>
#include<cmath>
#include<algorithm>
#include<functional>
#include<list>
#include<deque>
#include<bitset>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<cstring>
#include<sstream>
#include<complex>
#include<iomanip>
#include<numeric>
#include<cassert>
#define X first
#define Y second
#define pb push_back
#define rep(X,Y) for (int (X) = 0;(X) < (Y);++(X))
#define reps(X,S,Y) for (int (X) = S;(X) < (Y);++(X))
#define rrep(X,Y) for (int (X) = (Y)-1;(X) >=0;--(X))
#define rreps(X,S,Y) for (int (X) = (Y)-1;(X) >= (S);--(X))
#define repe(X,Y) for ((X) = 0;(X) < (Y);++(X))
#define peat(X,Y) for (;(X) < (Y);++(X))
#define all(X) (X).begin(),(X).end()
#define rall(X) (X).rbegin(),(X).rend()
#define eb emplace_back
#define UNIQUE(X) (X).erase(unique(all(X)),(X).end())
#define Endl endl
 
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
template<class T> using vv=vector<vector<T>>;
template<class T> ostream& operator<<(ostream &os, const vector<T> &t) {
os<<"{"; rep(i,t.size()) {os<<t[i]<<",";} os<<"}"<<endl; return os;}
template<class S, class T> ostream& operator<<(ostream &os, const pair<S,T> &t) { return os<<"("<<t.first<<","<<t.second<<")";}
template<class T> inline bool MX(T &l,const T &r){return l<r?l=r,1:0;}
template<class T> inline bool MN(T &l,const T &r){return l>r?l=r,1:0;}
#define out(args...){vector<string> a_r_g_s=s_p_l_i_t(#args, ','); e_r_r(a_r_g_s.begin(), args); }
vector<string> s_p_l_i_t(const string &s, char c){vector<string> v;int d=0,f=0;string t;for(char c:s){if(!d&&c==',')v.pb(t),t="";else t+=c;if(c=='\"'||c=='\'')f^=1;if(!f&&c=='(')++d;if(!f&&c==')')--d;}v.pb(t);return move(v);}
void e_r_r(vector<string>::iterator it) {}
template<typename T, typename... Args> void e_r_r(vector<string>::iterator it, T a, Args... args){ if(*it==" 1"||*it=="1") cerr<<endl; else cerr << it -> substr((*it)[0] == ' ', it -> length()) << " = " << a << ", "; e_r_r(++it, args...);}
const ll MOD=1e9+7;
 
int dp[55][729];
int dp2[55][81];
 
int dx[]={2,1,-1,-2,-2,-1,1,2};
int dy[]={1,2,2,1,-1,-2,-2,-1};
 
int main(){
  ios_base::sync_with_stdio(false);
  cout<<fixed<<setprecision(0);
  vector<int> pw(7); pw[0]=1;
  rep(i,6) pw[i+1]=pw[i]*3;
  fill(dp[0],dp[55],MOD);
  dp[0][accumulate(pw.begin(),pw.begin()+6,0)]=0;
  rep(i,50){
    rep(j,8)rep(k,729){
      int d[3][3];
      rep(l,3) d[2][l]=2*(j>>l&1);
      rep(l,6) d[l/3][l%3]=k/pw[l]%3;
      rep(y,3)rep(x,3)if(d[y][x]==2){
	rep(l,8){
	  int nx=x+dx[l];
	  int ny=y+dy[l];
	  if(nx>=0 && ny>=0 && nx<3 && ny<3 && d[ny][nx]==0) d[ny][nx]=1;
	}
      }
      if(d[0][0]&&d[0][1]&&d[0][2]){
	int c=0; rep(l,3) c+=(d[2][l]==2);
	int x=0; rep(l,6) x+=d[l/3+1][l%3]*pw[l];
	if(x==377 && i==1 && dp[i][k]+c==0){
	  rep(y,3){rep(x,3)cout<<d[y][x]<<",";cout<<endl;}
	  rep(l,6) cout<<k/pw[l]%3<<",";cout<<endl;
	  out(k,1);
	}
	MN(dp[i+1][x],dp[i][k]+c);
      }
    }
  }
  vector<int> re3(55);
  reps(i,1,52){
    int mn=MOD;
    rep(j,729){
      int f=1;
      rep(k,6)if((j/pw[k]%3)==0) f=0;
      if(i==2 && f && dp[i][j]==0){
	rep(k,6) cout<<(j/pw[k]%3)<<",";cout<<endl;
	out(j,1);
      }
      if(f) MN(mn,dp[i][j]);
    }
    re3[i]=mn;
  }
  fill(dp2[0],dp2[55],MOD);
  dp2[0][accumulate(pw.begin(),pw.begin()+4,0)]=0;
  rep(i,50){
    rep(j,4)rep(k,81){
      int d[3][2];
      rep(l,2) d[2][l]=2*(j>>l&1);
      rep(l,4) d[l/2][l%2]=k/pw[l]%3;
      rep(y,3)rep(x,2)if(d[y][x]==2){
	rep(l,8){
	  int nx=x+dx[l];
	  int ny=y+dy[l];
	  if(nx>=0 && ny>=0 && nx<2 && ny<3 && d[ny][nx]==0) d[ny][nx]=1;
	}
      }
      if(d[0][0]&&d[0][1]){
	int c=0; rep(l,2) c+=(d[2][l]==2);
	int x=0; rep(l,4) x+=d[l/2+1][l%2]*pw[l];
	MN(dp2[i+1][x],dp2[i][k]+c);
      }
    }
  }
  vector<int> re2(55);
  reps(i,1,52){
    int mn=MOD;
    rep(j,81){
      int f=1;
      rep(k,4)if((j/pw[k]%3)==0) f=0;
      if(f) MN(mn,dp2[i][j]);
    }
    re2[i]=mn;
  }
  //out(re2,re3,1);
  int T;
  cin>>T;
  while(T--){
    int h,w;
    cin>>h>>w;
    if(h>w) swap(h,w);
    if(h==1){
      cout<<w<<endl;
    }else if(h==2){
      cout<<re2[w]<<endl;
    }else{
      cout<<re3[w]<<endl;
    }
  }
  return 0;
}
 
