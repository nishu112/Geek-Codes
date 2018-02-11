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
    int a[]={2,3,5};
    int l2,l3,l5;
    l2=n/15,l3=n/10,l5=n/6;
    int i,j,k,flag=0;
    for(i=0;i<=l2;++i)
    	{
    	for(j=0;j<=l3;++j)
    		{
    		if(i*15+j*10>n)
    		    break;
    		for(k=0;k<=l5;++k)
    			{
    			if(i*15+j*10+k*6>n)
    		    	break;
    		    if((i*15+j*10+k*6)==n)
    		    	{
    		    	flag=1;
    		    	goto end;
					}
				}
			}
		}
	end: ;
	if(flag)
		{
		k=6*k;
		j=10*j;
		i=15*i;
		while(k--)
			cout<<5;
		while(j--)
			cout<<3;
		while(i--)
			cout<<2;
		cout<<'\n';
		}
	else
		{
		cout<<"-1\n";
		}
		
    }

	return 0;
}
