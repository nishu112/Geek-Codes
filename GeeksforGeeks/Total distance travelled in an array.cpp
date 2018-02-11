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
    int num;
    unordered_map<int,int> hash;
    for(int i=0;i<n;i++)
    	{
    	cin>>num;	
    	hash[num]=i;
		}
	int dist=0;
	for(int i=1;i<n;++i)
		{
		dist+=abs(hash[i]-hash[i+1]);
		}
	cout<<dist<<'\n';
    }
	return 0;
}
