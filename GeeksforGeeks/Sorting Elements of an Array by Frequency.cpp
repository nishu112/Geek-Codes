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
    int a[61]={0};
    int num,total=n;
    while(total--)
        {
        cin>>num;
        a[num]++;
        }
    for(int i=0;i<n;i++)
        {
        //if(a[i]==0)
        int j;
          //  continue;
        int max=0,pos=0;
        for(j=1;j<=60;j++)
            {
            if(max<a[j])
                {
                max=a[j];
                pos=j;
                }
            }
        a[pos]=0;
        while(max>0)
            {
            cout<<pos<<" ";
            max--;
            }
        }
    cout<<'\n';
    }

	return 0;
}
