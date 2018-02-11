#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
int t;
cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int i=0,count=0,ans=0;
        bool find=1;
        while(str[i])
        {
            if(str[i]!='0' && str[i]!='1') { ans+=(count-1)/2;count=0; find=1;  ++i;  continue;}
                  
            if(str[i]-48==find) find^=1,++count;
            ++i;
        }
    ans+=(count-1)/2;
    cout<<ans<<'\n';
    }
    return 0;
}

