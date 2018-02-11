#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
int t;
cin>>t;
string answer[]={"YES","NO"};
while(t--)
    {
    vector<int> a(3);
    int flag=0,sum=0;
    for(int i=0;i<3;i++)
    	{
    	cin>>a[i];
    	sum+=a[i];
    	if(a[i]==0)
    		flag=1;
		}
	if(!flag && sum!=180)
		flag=1;
	cout<<answer[flag]<<'\n';
		
    }

	return 0;
}
