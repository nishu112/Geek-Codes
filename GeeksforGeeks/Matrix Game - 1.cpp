#include<iostream>
#include<map>
#include<string.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    int n;
    cin>>n;
    string str[n],mystr="";
    mystr.resize(n,'0');
    map<string,bool> mymap;
    int count=0;
    for(int i=0;i<n;++i)
    	{
    	cin>>str[i];
    	if(str[i]!=mystr && mymap.find(str[i])==mymap.end())
    		{
			cout<<count<<" ";
			++count;
			mymap[str[i]]=true;
			}
		}
	if(mymap.size()==0)
		cout<<-1;
	cout<<'\n';
    }

	return 0;
}
