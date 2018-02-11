#include<iostream>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--)
    {
    int s,d;
    cin>>s>>d;
    int flag=0;
    if(9*d<s)
    	{
    	cout<<-1<<"\n";
    	continue;
		}
	else
		{
		while(d>1)
			{
			if(9*(d-1)>=s)
				{
				if(flag==0)
					{
					cout<<1;
					flag=1;
					s-=1;
					}
				else
					{
					cout<<0;
					}
				}
			else if(9*(d-1)<s)
				{
				cout<<s-9*(d-1);
				s-=s-9*(d-1);
				}
			d--;
			if(d==1)
				cout<<s;
			}
		}
	cout<<"\n";
    }

	return 0;
}
