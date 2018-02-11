#include<iostream>
#include<string.h>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--)
    {
    char str[2001];
    cin>>str;
    int i=0,j=strlen(str),s,e;
    s=0,e=j-1;
    while(i<j)
        {
        if(str[i]=='.')
            {
            e=i-1;
            for(int k=e;k>=s;k--)
                {
                cout<<str[k];
                }
            s=i+1;
            cout<<".";
            }
        i++;
        }
    for(int k=j;k>=s;k--)
        cout<<str[k];
    cout<<"\n";
    }

	return 0;
}
