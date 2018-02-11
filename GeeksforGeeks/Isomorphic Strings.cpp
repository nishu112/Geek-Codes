#include<iostream>
#include<unordered_map>
using namespace std;
void print(int n)
    {
    cout<<n<<'\n';
    }
int main()
{
int t;
cin>>t;
while(t--)
    {
    string str1,str2;
    cin>>str1>>str2;
    int flag=1;
    if(str1.length()!=str2.length())
        {
        flag=0;
        print(flag);
        continue;
        }
    unordered_map<char,char> mymap;
    int i=0;
    while(str1[i]!='\0')
        {
        if(mymap.find(str1[i])==mymap.end())
            mymap[str1[i]]=str2[i];
        else if(mymap[str1[i]]!=str2[i])
            {
            flag=0;
            break;
            }
        ++i;
        }
    print(flag);
    }
	return 0;
}
