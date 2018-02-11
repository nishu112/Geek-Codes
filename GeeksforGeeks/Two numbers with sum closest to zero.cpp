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
    for(int i=0;i<n;i++)
        {
        cin>>a[i];
        }
    sort(a,a+n);
    int sum=0,max_sum,num1,num2;
    if(n==1)
        {
        cout<<a[0]<<"\n";
        continue;
        //num=a[0];
        }
    else
        {
        num1=a[0];
        num2=a[1];
		max_sum=abs(a[0]+a[1]);
		}
    for(int i=0;i<n-1;i++)
        {
        sum=abs(a[i]+a[i+1]);
        if(max_sum>sum)
            {
            max_sum=sum;
            num1=a[i];
            num2=a[i+1];
            }
        }
    cout<<num1<<" "<<num2<<"\n";
    }

	return 0;
}
