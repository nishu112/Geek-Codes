#include<iostream>
#include<set>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--)
    {
    set<int> a;
    int n;
    cin>>n;
    int num;
    for(int i=0;i<n;i++)
    	{
    	cin>>num;
    	a.insert(num);
		}
	set<int> :: iterator itr;
	//itr=a.begin();
	for(itr=a.begin();itr!=a.end();itr++)
		{
		cout<<*itr<<" ";
	//	a.sh
		}
    }

	return 0;
}
