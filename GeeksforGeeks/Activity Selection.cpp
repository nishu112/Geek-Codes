#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef struct activity
	{
	int first;
	int second;
	}activity;
int greater_sec(activity a,activity b)
	{
	return a.second < b.second ;
	}
int main()
{
int t;
cin>>t;
while(t--)
    {
    int n;
    cin>>n;
    activity a[n];
    for(int i=0;i<n;i++)
    	cin>>a[i].first;
	for(int i=0;i<n;i++)
    	cin>>a[i].second;
	sort(a,a+n,greater_sec);
	int count=1,last=a[0].second;
	for(int i=1;i<n;i++)
		if(a[i].first>=last)
			{
			count++;
			last=a[i].second;
			}
	cout<<count<<'\n';
    }
	return 0;
}
