#include <bits/stdc++.h>

using namespace std;
#define 	  ll		       long long
#define      pii                  std::pair<int,int>
#define      vi                   std::vector<int>
#define      vll                  std::vector<long long>
#define      mp(a,b)         make_pair(a,b)
#define      pb(a)             push_back(a)
#define      sc(x)	       scanf("%d",&x)
#define	  sc2(x,y)	       scanf("%d%d",&x,&y)
#define	  sc3(x,y,z)      scanf("%d%d%d",&x,&y,&z)
#define      each(it,s)       for(auto it = s.begin(); it != s.end(); ++it)
#define      rep(i, n)         for(int i = 0; i < (n); ++i)
#define      fill(a)             memset(a, 0, sizeof (a))
#define      sortA(v)         sort(v.begin(), v.end())
#define      sortD(v)         sort(v.begin(), v.end(), greater<auto>())
#define      X                   first
#define      Y                   second
bool check_vow(char ch)
    {
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') return 1;
    return 0;
    }
bool check(string str)
    {
    int cons=0,vow=0;
    int i=0;
    while(str[i]!='\0')
        {
        if(str[i]=='?') 
            {
            ++cons,++vow;
            }
        else if(check_vow(str[i]))  ++vow,cons=0;
        else    ++cons,vow=0;
        if(cons>3 || vow>5)   return 0;
        ++i;
        }
    return 1;
    }
int main() {
int t;
sc(t);
string ans[]={"0\n","1\n"};
while(t--)
	{
	string str;
	cin>>str;
    cout<<ans[check(str)];
	}
return 0;
}
