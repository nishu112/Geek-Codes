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
    string str[5]={"abs","hi","NO","hey","nope",[2]="myself"};// can't declared like array (cmopiler give an error)
    cout<<str[2];
    }
	return 0;
}
