#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
int gcd(int a,int b){
	if(a==0)	return  b;
	return (b%a,a);
}

void solve(){
	int a;
	string b;
	cin>>a>>b;
	int B=0;
	if(a==0)	{cout<<b<<"\n";return;}
	for(int i=0;b[i]!='\0';++i)
		{
		B=(B*10+(b[i]-'0'))%a;
		//B%=a;
		}
	//cout<<"a="<<a<<" b="<<B<<"\n";
	cout<<__gcd(a,B)<<"\n";
}
int main()
{
int t;
cin>>t;
while(t--)
	{
	solve();
	}
return 0;
}


