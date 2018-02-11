#include<stdio.h>
#include<malloc.h>
int main()
{
	int n;
	scanf("%d",&n);
	int *a;
	a=(int *)malloc(sizeof(int)*n);
	int i;
	for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}

