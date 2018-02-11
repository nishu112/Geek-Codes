#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
        {
        string s,str;
        cin>>s;
        str=s;
        next_permutation(str.begin(),str.end());
        if(str>s)
        	cout<<str<<"\n";
        else
            cout<<"not possible\n";
        }

    return 0;
}

