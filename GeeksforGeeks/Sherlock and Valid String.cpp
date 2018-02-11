#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

   string str;
    cin>>str;
    long int a[26]={0},max=0;
    int i=0;
    while(str[i]!='\0')
    {
    a[str[i]-97]++;
        i++;
    }
    for(i=0;i<26;i++)
        {
        if(a[i]!=0)
            {
            if(max<a[i])
                 max=a[i];
            }
        }
    int flag=-1;
    for(i=0;i<26;i++)
    	cout<<a[i]<<" ";
    	cout<<'\n';
    cout<<"max="<<max<<"\n";
    for(i=0;i<26;i++)
        {
        if(a[i]!=0)
            {
            if(max-a[i]==1)
                {
                if(flag==-1)
                    flag=0;
                else
                    {
                    flag=1;
                    break;
                    }
                ///continue;
                }
            else if(max-a[i]>1)
                {
                flag=2;
                break;
                } 
            }
        }
    if(flag==-1 ||  flag==0)
            cout<<"YES";
     else
          cout<<"NO";
    return 0;
}


