#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    int n,m,k;
    cin>>n>>m>>k;
    int num;
    unordered_set<int> myset;
    for(int i=0;i<m;++i)
        {
        cin>>num;
        myset.insert(num);
        }
    int a[2*k];
    for(int i=0;i<2*k;i++)
    	cin>>a[i];
    int last_pos=1,num_find=1;
    for(int i=0;i<n;i+=2)
        {
        if(a[i]==num_find && myset.find(a[i])!=myset.end()|| a[i+1]==num_find && myset.find(a[i+1])!=myset.end())
    	    break;
        else if(a[i]==num_find)
            num_find=a[i+1];
        else if(a[i+1]==num_find)
            num_find=a[i];
        }
    cout<<num_find<<'\n';
    }

	return 0;
}
