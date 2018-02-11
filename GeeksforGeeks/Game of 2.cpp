#include<iostream>
#include<bitset>
using namespace std;
int main()
 {
int t;
cin>>t;
while(t--)
    {
    unsigned long long n;
    string name[]={"Arjun","Karan"};
    cin>>n;
    int count=0;
    while(n>1)
    	{
    	if((n&(n-1))!=0)
    		{
    		unsigned long long p=n;
    		while((p&(p-1))!=0)
    			{
    			p=(p&(p-1));
				}
			n-=p;
    		}
    	else
    		{
    		n=n>>1;
			}
		count++;
		}
	cout<<name[count%2]<<"\n";
    }

	return 0;
}
