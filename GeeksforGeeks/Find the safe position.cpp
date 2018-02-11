#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    int n;
    cin>>n;
    int m=n;
    int num=~0;
    while((n&(n-1))!=0)
    	{
    	n=(n&num);
    	num=num<<1;
		}
	int a=m-n;
	cout<<2*a+1<<'\n';
    }

	return 0;
}
