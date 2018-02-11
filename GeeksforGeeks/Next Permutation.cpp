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
    int n,num;
    cin>>n;
    vector<int> arr;
    vector<int> :: iterator itr;
    for(int i=0;i<n;i++)
    	{
    	cin>>num;
    	arr.push_back(num);
    	}
    next_permutation(arr.begin(),arr.end());
	for(itr=arr.begin();itr!=arr.end();++itr)
		{
		cout<<*itr<<" ";
		}
	cout<<'\n';
    }

	return 0;
}
