#include<stdio.h>
int main()
{
	int x,n=10,flag=0;
	int begin=0,upper=n-1,mid;
	int a[10]={4,6,7,8,9,10,12,14,16,19};
	printf("Enter the value");
	scanf("%d",&x);
	while(begin<=upper)
	{
		mid=(begin+upper)/2;
		if(a[mid]==x)
		 {
		 	flag=1;
		 	break;	
		 }
		 else
		 {
		 	if(a[mid]<x)
		 	{
		 		begin=mid+1;
			}
			else
			{
				upper=mid-1;
			}
		 }
	}
	if(flag)
	printf("value is found");
	else
	printf("not found");
}
