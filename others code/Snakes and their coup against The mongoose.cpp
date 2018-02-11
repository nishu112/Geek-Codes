#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> pp;
#define mp make_pair
#define pb push_back
#define S second
#define F first
const int MAX=1e5+7;
const int MOD=1e9+7;
char s[2][MAX];
int main()
{
	int n,m,i,j,t,ns,nm,ans,h,r;
	bool f;
	scanf("%d",&t);
	while(t--)
	{
		ans=0;
		scanf("%d",&n);
		scanf(" %s",s[0]);
		scanf(" %s",s[1]);
		ns=0,nm=0;
		f=false;
		for(i=0;i<n;i++)
		{
			if(s[0][i]=='*') ns++;
			if(s[1][i]=='*') nm++;
		}
		if(ns&&nm) ans++;
		/*for(i=0;i<n;i++)
		{
			if(s[0][i]=='*'||s[1][i]=='*')
				f=true,ans++;
		}
*/		/*for(i=0;i<n;i++)
			if(s[0][i]=='*'&&s[1][i]=='*') f=true,ans--;*/
		ns=0,nm=0;
		for(i=0;i<n;i++)
		{
			if(s[0][i]=='*') ns++;
			if(s[1][i]=='*') nm++;
			if(ns>1||nm>1) {
				ans++;
				if(s[0][i]=='*') ns=1;
				else ns=0;
				if(s[1][i]=='*') nm=1;
				else nm=0;
			}
		}
		//if(f) ans++;
		//ans+=ns-1+nm-1;
		printf("%d\n",ans);
	}
	return 0;
} 
Comments 

