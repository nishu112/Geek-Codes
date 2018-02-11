#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    int n;
    cin>>n;
    string str;
    cin>>str;
    int i=0,j=str.length()-1;
    int count=1;
    while(i<j)
        {
        if(str[i]!=str[j])
            {
            count=2;
            break;
            }
        else
            ++i,--j;
        }
    cout<<count<<'\n';
    }

	return 0;
}
