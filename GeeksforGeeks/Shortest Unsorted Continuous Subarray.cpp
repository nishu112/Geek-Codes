#include<iostream>
#include<vector>
using namespace std;
int findUnsortedSubarray(vector<int>& a) 
    {
    int n=a.size();
    if(n==1)
        return 0;
    int i=0;
    while(i+1<n && a[i]<a[i+1])
        {
        ++i;
        }
    int j=n-1;
    while(j>0  && a[j]>a[j-1])
        {
        --j;
        }
    return j-i+1;
    }
int main()
{
int t;
cin>>t;
while(t--)
    {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    	cin>>a[i];
    cout<<findUnsortedSubarray(a)<<'\n';
    }

	return 0;
}
