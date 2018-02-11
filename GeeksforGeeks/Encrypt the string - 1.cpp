#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--)
    {
    int a[27]={0};
    string str,final;
    cin>>str;
    int i=0;
    char ch=str[0];
    while(str[i]!='\0')
        {
        if(str[i]==ch)
            {
            a[str[i]-96]++;
            //cout<<"ch="<<a[ch-96]<<"\n";
            //i++;
            //continue;
            }
        if(str[i+1]!=ch || str[i+1]=='\0')
            {
            final+=ch;
            cout<<"ch="<<a[ch-96]<<"\n";
            //frequency=a[ch]+48;
            final+=to_string(a[ch-96]);
            a[ch-96]=0;
            ch=str[i+1];
            }
        i++;
        }cout<<final<<'\n';
    reverse(final.begin(),final.end());
    cout<<final<<'\n';
    }

	return 0;
}
