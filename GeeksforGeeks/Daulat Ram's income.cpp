#include <iostream>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
    {
    long long int n;
    long double f0,f1,temp;
    scanf("%Lf %Lf %lld",&f0,&f1,&n);
    if(n==0)
        printf("%.0Lf\n",f0);
    else if(n==1)
        printf("%.0Lf\n",f1);
    else
        {
        for(long long int i=1;i<=n;i++)
            {
            temp=f0+f1+f0*f1;
            f0=f1;
            f1=temp;
            }
        printf("%.0Lf\n",f0);
        }
    }
    return 0;
}

