#include <bits/stdc++.h>

using namespace std;
#define 	 ll				   long long
#define      pii               std::pair<int,int>
#define      vi                std::vector<int>
#define      vll               std::vector<long long>
#define      mp(a,b)           make_pair(a,b)
#define      pb(a)             push_back(a)
#define		 sc(x)			   scanf("%d",&x)
#define		 sc2(x,y)		   scanf("%d%d",&x,&y)
#define		 sc3(x,y,z)		   scanf("%d%d%d",&x,&y,&z)
#define		 pf(x)			   printf("%d\n",x);
#define 	 pf2(x,y)		   printf("%d %d\n",x,y);
#define		 pf3(x,y,z)		   printf("%d %d %d\n",x,y,z);
#define      each(it,s)        for(auto it = s.begin(); it != s.end(); ++it)
#define      rep(i, n)         for(int i = 0; i < (n); ++i)
#define      fill(a)           memset(a, 0, sizeof (a))
#define      sortA(v)          sort(v.begin(), v.end())
#define      sortD(v)          sort(v.begin(), v.end(), greater<auto>())
#define      X                 first
#define      Y                 second

#define wl(n) while (n--)
#define debug(x) cerr<<"debug->"<<#x<<"::"<<x<<endl
#define debug2(x,y) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n"
#define debug3(x,y,z) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n"
#define tr(container, it)  for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) 
#define all(v) v.begin(),v.end()
const double eps=0.000000000000001 ;


string st;
void convertNS(int n)
	{
	if(n<=25)
		{
		st+='A'+n;
		return ;
		}
	convertNS(n/26-1);
	st+='A'+n%26;
	}
int convertSN(string mystr)
	{
	int l=mystr.length()-1;
	int fact=1;
	int num=0;
	while(l>=0)
		{
		num+=(mystr[l]-'@')*fact;
		fact*=26;
		--l;
		}
	return num;
	}
int main(int argc, char **argv) {
//std::ios::sync_with_stdio(false);
cin.tie(NULL);
int t;
sc(t);
string str;
while(t--)
	{
	cin>>str;
	int l=str.length(),i(0);
	int flag(0);
	while(i<=l)
		{
		if(flag==1 && isalpha(str[i]))
			{
			flag=2;
			break;
			}
		else if(!flag && isdigit(str[i]))
			flag=1;
		++i;
		}
	string ans="";
	if(flag==1)
		{
		int row=0;
		int s=0;
		string conv="";
		while(s<l)
			{
			if(isalpha(str[s]))
				conv+=str[s];
			else
				row=row*10+(str[s]-'0');
			++s;
			}
		int col=convertSN(conv);
		ans="R";
		ans+=to_string(row);
		ans+="C";
		ans+=to_string(col);
		}
	else
		{
		int coordinate[2]={0},j=-1;
		int row,col;
		stringstream ss(str);
		char ch;
		ss>>ch>>row>>ch>>col;
		st="";
		convertNS(col-1);
		ans=st+to_string(row);
		}
	cout<<ans<<'\n';
	}
return 0;
}


