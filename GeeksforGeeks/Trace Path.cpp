#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
    {
    int n,m;
    cin>>n>>m;
    --n,--m;
    int num1=n,num2=m;
    int n1=-n,m1=-m;
    int x=0,y=0,flag=1;
    string str;
    cin>>str;
    int i=0;
    while(str[i])
        {
        switch(str[i])
            {
            case 'L':
                --x;
                break;
            case 'R':
                ++x;
                break;
            case 'U':
                ++y;
                break;
            case 'D':
                --y;
                break;
            }
        if(x>m || x<m1 || y>n || y<n1)
            {
            flag=0;
            break;
            }
        if(x>0)
            m1=max(m1,-num2+x);
        else
            m=min(num2+x,m);
        if(y>0)
            n1=max(n1,-num1+y);
        else
            n=min(num1+y,n);
        ++i;
        }
    cout<<flag<<'\n';
    }

	return 0;
}
