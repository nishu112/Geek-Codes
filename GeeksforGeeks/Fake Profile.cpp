#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    string str;
    cin>>str;
    int a[26]={0};
	int i=0;
	while(str[i]!='\0')
		{
		if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u')
		    a[str[i]-'a']=1;
		++i;
		}
	i=0;
	int count=0;
	string ans[]={"SHE!","HE!"};
	while(i<26)
		{
		if(a[i]==1)
			++count;
		++i;
		}
	cout<<ans[(count&1)]<<'\n';
    }

	return 0;
}
