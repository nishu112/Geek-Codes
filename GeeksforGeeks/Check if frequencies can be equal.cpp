#include<iostream>
#include<map>
#include<limits.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    string str;
    cin>>str;
    int i=0;
    int freq[256]={0};
    while(str[i])
        {
        ++freq[str[i]];
        ++i;
        }
    i=0;
    map<int,int> mymap;
    while(i<256)
        {
        if(freq[i])
            {
            ++mymap[freq[i]];
            }
        ++i;
        }
    int flag=0;
    for(map<int,int> ::iterator itr=mymap.begin();itr!=mymap.end();++itr)
        cout<<itr->first<<" "<<itr->second<<'\n';
    }

	return 0;
}
