#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--)
    {
    int n,x,y;
    cin>>n;
    multimap<int,int> interval;
    for(int i=0;i<n;i++)
    	{
    	cin>>x>>y;
    	interval.insert(pair<int,int>(x,y));
		}
	multimap<int,int> :: iterator itr,itrl;
	itrl=interval.end();
	itr=interval.begin()
	itrl--;
	cout<<(*itr).first<<" ";
	int num=(*itr).second;
	itr++;
	for(;itr!=interval.end();itr++)
		{
		if(num>=(*itr).first)
			{
			if(num>=(*itr).second)
				{
				
				}
			}
		else
			{
			cout<<num<<" "<<(*itr).first;
			num=(*itr).second;
			if(itr==itrl)
				{
				cout<<(*itr).second;
				}
			}
		}
    }

	return 0;
}
