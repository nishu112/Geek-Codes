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
        string s;
        cin>>s;
        int i=0,j=s.length()-1,loc=-1;
        while(i<j)
           {
           if(s[i]!=s[j])
               {
               if(s[i+1]==s[j])
                   loc=i;
               if(s[i]==s[j-1])
                   loc=j;
               break;
               }
            i++;
            j--;
           }
    cout<<loc<<"\n";
    }
    return 0;
}

