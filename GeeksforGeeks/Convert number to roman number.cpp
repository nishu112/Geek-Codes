#include<bits/stdc++.h>
using namespace std;
void convertToRoman(int n) 
{
vector<vector<string>> str=
              {
                {"I","II","III","IV","V","VI","VII","VIII","IX"},
                {"X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},
                {"C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},
                {"M","MM","MMM"}
              };
string mystr=to_string(n),st="";
int level=mystr.length()-1;
int i=0;
while(mystr[i]!='\0')
	{
	if(mystr[i]!='0')
		st=st+str[level][mystr[i]-'0'-1];
	--level;
	++i;
	}
cout<<st;
}
int main()
{
int t;
cin>>t;
while(t--)
    {
	int n;
	cin>>n;
	convertToRoman(n) ;
	cout<<'\n';
    }
return ;
}
