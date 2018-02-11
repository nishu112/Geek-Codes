#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    float n;
	    cin>>n;
	    unsigned long num=((int)(n*1000))%1000;
	    int i=2;
	    while(1)
	    {
	        if((num*i)%1000==0)
	            break;
	        i++;
	    }
	    cout<<i<<endl;
	}
	return 0;
}
