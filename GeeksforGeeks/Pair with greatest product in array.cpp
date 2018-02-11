#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    int n;
    cin>>n;
    int a[n];
    int hash[101]={0};
    for(int i=0;i<n;i++)
        {
        cin>>a[i];
        hash[a[i]]++;;
        }
    //sort(a,a+n);
    int res=-1;
    for(int i=0;i<n-1;i++)
        {
        if(hash[i]!=0)
            {
            for(int j=0;j<n;j++)
                {
                if(a[j]%i==0 && hash[a[j]/i]>0)
                    {
                    res=i;
                    goto last;
                    }
                }
            }
        }
    last: ;
    cout<<res<<"\n";
    }
	return 0;
}
