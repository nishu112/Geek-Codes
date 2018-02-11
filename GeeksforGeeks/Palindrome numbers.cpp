#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    long long n;
    cin>>n;
    long long num=n,len=0;
    while(num)
        {
        ++len;
        num=num>>1;
        }
    long long i=0,j=len-1;
    int flag=1;
    while(j>i)
        {
        if((!(n&(1<<i)))!=(!(n&(1<<j))))
            {
            flag=0;
            break;
            }
        --j,++i;
        }
    cout<<flag<<'\n';
    }

	return 0;
}
