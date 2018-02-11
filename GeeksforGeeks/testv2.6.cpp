#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5,6,7,8,9};
	int n=9;
	int x;
	scanf("%d",&x);
	int begin=0,end=n-1,mid,flag=0;
	while(begin<=end)
		{
		mid=(begin+end)/2;
		printf("begin=%d   end=%d  mid=%d\n",begin,end,mid);
		if(a[mid]==x)
			{
			flag=1;
			break;
			}
		else if(a[mid]<x)
			{
			begin=mid+1;
			}
		else
			{
			end=mid-1;
			}
		printf("begin=%d   end=%d  mid=%d\n",begin,end,mid);
		}
	if(flag)
		printf("element found at %d",mid);
	else
		printf("NOt found");
return 0;
	
}
