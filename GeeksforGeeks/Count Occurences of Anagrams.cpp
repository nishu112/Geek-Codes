#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    string str1,str2;
    cin>>str1>>str2;
    unordered_map<char,int> mymap,checkmap;
    int i=0;
    while(str2[i]!='\0')
        {
        ++mymap[str2[i]];
        checkmap[str2[i]]=0;
        ++i;
        }
    i=0;
    int l=str2.length();
    int count=0,char_count=0;
    while(i<l)
        {
        if(mymap.find(str1[i])!=mymap.end())
            {  
            ++checkmap[str1[i]];
            if(mymap[str1[i]]==checkmap[str1[i]]) 
                ++char_count;
            }
        ++i;
        }
    if(char_count==mymap.size())
        ++count;
    int j=0;
    while(str1[i]!='\0')
        {
        if(mymap.find(str1[j])!=mymap.end())
            {
            if(mymap[str1[j]]==checkmap[str1[j]])
                --char_count;
            if(checkmap[str1[j]]!=0)
              --checkmap[str1[j]];
            }
        if(mymap.find(str1[i])!=mymap.end())
            {
            ++checkmap[str1[i]];
            if(mymap[str1[i]]==checkmap[str1[i]])
                ++char_count;
            if(char_count==mymap.size())
                ++count;
            }
        ++j;
        ++i;
        }
    cout<<count<<'\n';
    }

	return 0;
}
