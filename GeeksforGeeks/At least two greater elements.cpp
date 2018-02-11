#include<iostream>
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
    int arr[101]={0};
    for(int i=0;i<n;i++)
        {
        cin>>a[i];
        arr[a[i]]++;
        }
    int count=0,sec_max;
    for(int i=100;i>=1;i--)
        {
        while(arr[i])
            {
            count++;
            if(count==2)
                {
                sec_max=i;
                goto last;
                //break;
                }
            arr[i]--;
            }
        }
    last:
    if(count==2)
        {
        for(int i=0;i<n;i++)
            {
            if(a[i]<sec_max)
                {
                cout<<a[i]<<" ";
                }
            }
        }
    cout<<'\n';    
    }
	return 0;
}
