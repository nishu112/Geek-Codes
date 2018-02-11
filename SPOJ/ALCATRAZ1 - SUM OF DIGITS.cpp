#include<iostream>

using namespace std;
int main()
{
std::ios::sync_with_stdio(false);
int t;
cin>>t;
while(t--)
	{
	string str;
	cin>>str;
	long long sum=-48*str.length();
	int i=0;
	while(str[i]!='\0')
		{
		sum+=str[i];
		++i;
		}
	cout<<sum<<'\n';
	}
return 0;
}
