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
        cin>>a[i];
    sort(a,a+n);
    int m;
    cin>>m;
    int i,j,min=INT_MAX;
    i=0;j=m-1;
    while(j<n)
        {
        if(min>(a[j]-a[i]))
            {
            min=a[j]-a[i];
            }
        i++;
        j++;
        }
    cout<<min<<'\n';
    }

	return 0;
}
