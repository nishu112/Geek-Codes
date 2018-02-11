#include<iostream>
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
    vector<int> v;
    for(int i=0;i<n;i++)
        {
        cin>>num;
        v.push_back(num);
        }
    int sum=0;
    for(vector<int> :: iterator itr=v.begin();itr!=v.end();++itr)
        {
        sum+=*itr;
        }
    if(2*sum==n*(n+1))
        cout<<"YES\n";
    else
        cout<<"NO\n";
    }

	return 0;
}
