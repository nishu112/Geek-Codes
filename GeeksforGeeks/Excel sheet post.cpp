#include<iostream>
using namespace std;
void print(int n)
    {
    if(n==0)
    	return;
	print((n-1)/26);
    cout<<char((n-1)%26+'A');
    }
int main()
{
int t;
cin>>t;
while(t--)
    {
    int n;
    cin>>n;
    print(n);
    }
	return 0;
}
