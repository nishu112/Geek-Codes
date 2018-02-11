#include<stdio.h>
void func(int,int a[]);
int main()
{
	int i,n,A[8];
	for(i=0;i<8;i++)
	{
	  printf("entre the value A[%d]= :",i);
	   scanf("%d",&A[i]);
    }
        scanf("%d",&n);
    printf("size=%d\n",sizeof(A)/sizeof(int));
        func(n,A);
     //   return 0;
}
void func(int n,int A[8])
{
	int i; 
	printf("size=%d\n",sizeof(A)/sizeof(int));
	for(i=0;i<8;i++)
	  if(A[i]==n)
	    printf("%d\n%d",A[i],i);
	      
}
