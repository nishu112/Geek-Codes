#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    int n;
    cin>>n;
    vector<int> a(n),b(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cin>>b[i];
	if(n==1)
		{
		cout<<"-1\n";
		continue;
		}
	vector<int> :: iterator itr1,itr2,itr3,itr4;
	int temp;
	itr1=min_element(a.begin(),a.end());
	temp=*itr1;
	*itr1=INT_MAX;
	itr2=min_element(a.begin(),a.end());
	*itr1=temp;
	itr3=min_element(b.begin(),b.end());
	temp=*itr3;
	*itr3=INT_MAX;
	itr4=min_element(b.begin(),b.end());
	*itr3=temp;
	int val=0;
	if(itr1-a.begin()==itr3-b.begin()) // Checking if both indexes are same in the array
		val=min(*itr2+*itr3,*itr1+*itr4);
	else
		val=*itr1+*itr3;
	cout<<val<<'\n';
    }

	return 0;
}
