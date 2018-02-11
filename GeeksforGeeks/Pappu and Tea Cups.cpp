#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,num;
    int count=0;
    cin>>n;
    while(n--)
        {
        cin>>num;
        if(num==1)
            count++;
        }
    int res=ceil((ceil(n/2.0)+1)/2.0);
    cout<<res;
    return 0;
}

