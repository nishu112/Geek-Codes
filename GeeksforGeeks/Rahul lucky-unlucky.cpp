#include<iostream>
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
    vector<char> v(n);
    vector<int> arr;
    for(int i=0;i<n;++i)
    	cin>>v[i];
    int flag=0;
    for(int i=0;i<n;++i)
    	if(v[i]=='T')
    		{
    		++flag;
    		arr.push_back(i+1);
    		v[i]='H';
    		if(i+1<n)
    			if(v[i+1]=='T')
    				v[i+1]='H';
				else
					v[i+1]='T';
			//cout<<i+1<<" ";
			}
	cout<<flag<<'\n';
	for(vector<int> :: iterator itr=arr.begin();itr!=arr.end();++itr)
		cout<<*itr<<" ";
	cout<<'\n';
    }

	return 0;
}
