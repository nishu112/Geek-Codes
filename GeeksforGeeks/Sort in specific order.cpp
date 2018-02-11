#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--)
    {
    vector<int> v;
    int n;
    cin>>n;
    int num;
    for(int i=0;i<n;++i)
    	{
    	cin>>num;
    	v.push_back(num);
		}
	sort(v.begin(),v.end());
	for(vector<int>::reverse_iterator itr=v.rbegin();itr!=v.rend();++itr)
		{
		if((*itr)%2==1)
			cout<<*itr<<" ";
		}
	for(vector<int>:: iterator itr=v.begin();itr!=v.end();++itr)
		{
		if((*itr)%2==0)
			cout<<*itr<<" ";
		}
	cout<<'\n';
    }
	return 0;
}
