#include <bits/stdc++.h>

using namespace std;

#define	     pf(x)			   printf("%d ",x)
#define	     pf2(x,y)		   printf("%d %d ",x,y)
#define	     pf3(x,y,z)		   printf("%d %d %d ",x,y,z)
#define 	 pfnl()			   putchar('\n');
#define      rep(i, n)         for(int i = 0; i < (n); ++i)

int main() {
//std::ios::sync_with_stdio(false);
string str;
map<char,bool> m;
m['U']=1;
m['D']=0;
int t;
cin>>t;
while(t--)
	{
	cin>>str;
	int i=0,count1=0,count2=0;    
	bool find1=0,find2=1;
	int l=str.length();
	rep(i,l){
		if(m[str[i]]==find1)	find1^=1,++count1;
		if(m[str[i]]==find2)	find2^=1,++count2;
	}
	int ans=min(count1,count2);
	ans=(ans+1)/2;
	pf(ans);
	pfnl();
	}
return 0;
}


