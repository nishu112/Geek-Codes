#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;


int main() {
  int t;
    cin>>t;
    while(t--)
        {
        char s[10006];
        cin>>s;
        int i=0,j=strlen(s)-1,loc=-1;
        cout<<strlen(s)<<endl;
        while(i<j)
           {
           if(s[i]!=s[j])
               {
              	loc=i;
               }
            i++;
            j--;
           }
    cout<<loc<<"\n";
    }
    return 0;
}

