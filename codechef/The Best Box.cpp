#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
	{
	int p,s;
	cin>>p>>s;
	float l=(p-2*sqrt((p*p)/4-(6*s)))/12;
	//cout<<"l="<<l<<'\n';
	float vol;
	cout<<fixed;
	cout<<setprecision(2);
	vol=l*(s/2-(p/4-l)*l);
	cout<<vol<<'\n';
	}
	return 0;
}
