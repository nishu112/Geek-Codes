#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool myfun(vector<int> a,vector<int> b)
    {
    return a[0]<b[0];
    }
int main()
{
int t;
cin>>t;
while(t--)
    {
    int n,tot;
    cin>>n>>tot;
    bool a[tot+1]={0};
    for(int i=0;i<=tot;++i)
    	a[i]=true;
    vector<vector<int>> arr(n,vector<int>(2));
    for(int i=0;i<n;i++)
        {
    	cin>>arr[i][0]>>arr[i][1];
    	}
    sort(arr.begin(),arr.end(),myfun);
    for(int i=0;i<n;++i)
    	cout<<arr[i][0]<<" "<<arr[i][1]<<'\n';
    for(int i=arr[0][0];i<=arr[0][1];++i)
    	a[i]=false;
    int loc;
    for(int i=1;i<n;++i)
        {
        if(arr[i][0]<=arr[i-1][1])
        	loc=arr[i-1][1];
        else
        	loc=arr[i][0];
        for(int j=loc;j<=arr[i][1];++j)
        	{
        	a[j]=false;
			}
        }
    int count=0;
    for(int i=1;i<=tot;++i)
    	{
		if(a[i])
    		++count;
    	else
			cout<<i<<" ";
    	}
    cout<<'\n';
    cout<<count<<'\n';
    }

	return 0;
}
