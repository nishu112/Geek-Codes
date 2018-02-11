#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    	cin>>a[i];
    int count=0;
    unordered_map<int,bool> map;
    for(int i=0;i<n;++i)
    	{
    	if(map[a[i]])
    		count+=2;
    	map[a[i]]^=1;
		}
	cout<<count<<'\n';
    }
	return 0;
}
