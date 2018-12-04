#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define scll(x) scanf("%lld",&x);
ll gcdContainer[400000005];
ll  dp[20005][20005];
ll gcd(ll a,ll b){
	if(a==0)	return b;
	if(b==0)	return a;
	return gcd(b%a,b);
}
int main()
{
	int n,q;
	scanf("%d %d",&n,&q);
	for(int i=0;i<n;++i)
		{
		scanf("%lld",&dp[0][i]);
		}
	for(int i=1;i<n;++i){
		for(int j=i;j<n;++j){
			dp[i][j]=gcd(dp[i-1][j-1],dp[i-1][j]);
		}
	}
	int k=0;
	for(int i=0;i<n;++i){
		for(int j=i;j<n;++j){
			gcdContainer[k++]=dp[i][j];
		}
	}
	sort(gcdContainer,gcdContainer+k);
	int query;
	while(q--){
		scanf("%d",&query);
		printf("%d\n",gcdContainer[query-1]);
	}
	
	
	
return 0;
} 
