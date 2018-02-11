#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
    int n;
    cin>>n;
    unsigned long long a[n],b[n+1];//num=static_cast<long long>1000000000000000001;
    //long long c[1000000000000000001]={0},d[1000000000000000001]={0};
    
    int i;
    for(i=0;i<n;i++)
        {
        cin>>a[i];
        //c[a[i]]++;
        }
    for(i=0;i<n+1;i++)
        {
        cin>>b[i];
        //d[b[i]]++;
        }
    int j;
    for(i=0;i<n+1;i++)
        {
        int flag=0;
        for(j=0;j<n;j++)
            {
            if(b[i]==a[j])
                {
                flag=1;
                break;
                }
            }
        if(flag==0)
            {
            
			cout<<b[j];
			}
        }
    }
    return 0;
}

