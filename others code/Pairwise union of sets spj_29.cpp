#include <bits/stdc++.h>
 
using namespace std;
 
#define SPEED ios::sync_with_stdio(false); cin.tie(0)
#define ll long long int
#define FF first
#define SS second
#define mp make_pair
#define pb push_back
#define sd(x) scanf("%d",&x)
#define slld(x) scanf("%lld",&x)
#define pd(x) printf("%d\n",x)
#define plld(x) printf("%lld\n",x)
#define pss printf
#define MOD 1000000007
#define INF 1e18
#define eps 0.00001
#define debug(n1) cout<<n1<<endl
ll t,n,k;
ll s[2505],a[2505][2505];
bool b[2505]; 
int main() {
slld(t);
 
while(t--)
{
  	slld(n);slld(k);
  	for(int i=1;i<=n;i++)
  	{
  		slld(s[i]);
  		for(int j=1;j<=s[i];j++)
 	 		slld(a[i][j]);
 	}
 	ll ans=0;
 	for(int i=1;i<=n;i++)
 	{
 		ll cnt=0;
 		for(int j=1;j<=s[i];j++)
 			b[a[i][j]]=1,cnt++;
 		for(int j=i+1;j<=n;j++)
 		{
 			ll cnt1=cnt;
 			for(int h=1;h<=s[j];h++)
 				if(!b[a[j][h]])cnt1++;
 			if(cnt1==k)ans++;
 		}
 		for(int j=1;j<=s[i];j++)
 			b[a[i][j]]=0;
 	}
 	plld(ans);
}
 
 
 
 
  return 0;
           }  
