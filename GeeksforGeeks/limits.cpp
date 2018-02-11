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
    	if((n&(n-1))==0)
    		n=n>>1;
    	else
    		{
    		string str=bitset<64>(n).to_string();
    		int i=0;
    		while(str[i]!='1')
    			i++;
    		//cout<<"n="<<n<<"  "<<((unsigned long long)1<<(63-i))<<"\n";
    		n=n-((unsigned long long)1<<(63-i));
    		/*if((n&(n-1))==0)
    		    n=n>>1;*/
			}
		count++;
		//cout<<"n="<<n<<"\n";
		}
	cout<<name[count%2]<<"\n";
    }

	return 0;
}
