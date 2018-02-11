#include<iostream>
#include<ios>    
#include<limits>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    //cout<<"t="<<t<<"\n";
    int x,T=0;
    char ch;
    cin>>x>>ch;
    if(x>11)
        {
        if(ch=='U')
            {
            T=(28-x);
            }
        else
            {
            T=x-11;    
            }
        }
    else
        {
        if(ch=='U')
            {
            T=11-x;    
            }
        else
            {
            T=x+11;    
            }
        }
    cout<<T<<"\n";
    }
	return 0;
}
