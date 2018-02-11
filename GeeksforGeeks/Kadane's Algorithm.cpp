#include<iostream>
using namespace std;
int find_max(int a,int b)
    {
    return a>b?a:b;
    }
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
    int max=a[0],current_max=a[0];
    for(int i=1;i<n;i++)
        {
        current_max=find_max(a[i],a[i]+current_max);
        max=find_max(current_max,max);
        }
    cout<<max<<'\n';
	}
	return 0;
}
