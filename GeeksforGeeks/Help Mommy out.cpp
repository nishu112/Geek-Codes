#include<iostream>
using namespace std;
void swap(int *a,int *b)
	{
	int temp=*a;
	*a=*b;
	*b=temp;
	}
int main()
{
int t;
cin>>t;
while(t--)
    {
    int m,s,n;
    cin>>m>>s>>n;
    int a[n];
    for(int i=0;i<n;i++)
    	cin>>a[i];
    int count,t_count=0;
    do
    	{
    	count=0;
    	for(int i=1;i<n;i++)
    		{
    		if(a[i]<a[i-1])
    			{
    			swap(&a[i],&a[i-1]);
    			count++;
				}
			}
		t_count+=count;
		}while(count!=0);
    
    if(t_count*s<=m*60)
    	cout<<"1\n";
    else
    	cout<<"0\n";
	}
	return 0;
}
