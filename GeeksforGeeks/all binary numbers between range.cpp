#include<iostream>
#include<bitset>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--)
    {
    int l,r;
    cin>>l>>r;
    for(int i=l;i<=r;i++)
    	{
    	cout<<bitset<12>(i)<<"\n";;
		}
    }
	return 0;
}
