#include<iostream>
#include<cmath>
#include<bitset>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--)
    {
    int l,r;
    long long num;
    cin>>l>>r;
    num=log(l)/log(2);
	num=pow(2,num+1)-1;
    if(num<r)
        {
        cout<<0<<"\n";
        continue;
        }
	int diff=r-l;
	int fact=log(diff)/(log(2))+1;
	l=l>>fact;
	l=l<<fact;
	cout<<l<<"\n";
    }
	return 0;
}
