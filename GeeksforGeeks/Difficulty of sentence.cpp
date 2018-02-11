#include <bits/stdc++.h>

using namespace std;
#define 	 ll				   long long
#define      pii               std::pair<int,int>
#define      vi                std::vector<int>
#define      vll               std::vector<long long>
#define      mp(a,b)           make_pair(a,b)
#define      pb(a)             push_back(a)
#define		 sc(x)			   scanf("%d",&x)
#define 	 scll(x)		   scanf("%lld",&x)
#define		 sc2(x,y)		   scanf("%d%d",&x,&y)
#define      rep(i, n)         for(int i = 0; i < (n); ++i)
#define 	 rep2(i,j,n)	   for(int i = j; i < (n); ++i)
#define debug(x) cerr<<"debug->"<<#x<<"::"<<x<<endl
#define debug2(x,y) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n"
#define debug3(x,y,z) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n"
#define MOD 1000000007
bool isvowel(char ch)
	{
	if(ch<=90)	ch+=32;
	if(ch=='a'|| ch=='e' || ch=='i' || ch=='o'|| ch=='u')	return 1;
	return 0;
	}

int main() {
int t;
sc(t);
cin.ignore();
while(t--)
	{
	string str;
	getline(cin,str);
	//cout<<str<<'\n';
	stringstream ss;
	ss<<str;
	//cout<<ss<<'\n';
	int easy=0,hard=0;
	while(!ss.eof())
		{
		int count1=0,count2=0;
		if(!(ss>>str))	continue;
		bool flag=0;
		bool prev=0,curr=0;
		int cons_count=0;
		int i=0;
		while(str[i]!='\0')
			{
			curr=!isvowel(str[i]);
			if(prev && curr )	++cons_count;
			else	cons_count=0;
			prev=curr;
			if(!cons_count && prev)	cons_count=1;
			if(curr)	++count1;
			else	++count2;
			if(cons_count==4)	
				{
				flag=1;
				break;
				}
			++i;
			}	
		if(flag)	++hard;
		else 
			{
			if(count1>count2)	++hard;
			else	++easy;
			}
		}
	int ans=5*hard+3*easy;
	//debug2(hard,easy);
	cout<<ans<<'\n';
	}
return 0;
}



