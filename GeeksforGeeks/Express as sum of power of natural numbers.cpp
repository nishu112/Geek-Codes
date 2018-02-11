#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int count=0;
//vector<int> v;
void rec(int x,int l,int n,int i,int sum)
	{
	//cout<<"sum="<<sum<<" l="<<l<<'\n';
	if(sum>=x)
		{
		if(sum==x)
			{
			/*for(vector<int> ::iterator itr=v.begin();itr!=v.end();++itr)
				cout<<*itr<<" ";
			cout<<'\n';
			while(v.empty())
				v.pop_back();*/
			count++;
			}
		return;
		}
	if(i<=l)
		{
		rec(x,l,n,i+1,sum);
		//v.push_back(pow(i,n));
		rec(x,l,n,i+1,sum+pow(i,n));
		//v.pop_back();
		}
	}
int main()
{
int t;
cin>>t;
while(t--)
    {
    int x,n;
    cin>>x>>n;
    count=0;
    //v.clear();
    rec(x,pow(x,1.0/n),n,1,0);
    cout<<count<<'\n';
    }

	return 0;
}
